//iki tam say�n�n toplam�n� g�steren program
#include <iostream>//girdi ve��kt� de�erelri i�lemleri i�in programa izin verir

int main(){
	int number1=0;//toplanacak ilk tamsay�
	int number2=0;//toplanacak ikinci tamsay�
	int sum=0;//number1 ve number2 de�erlerini topla
	
	std::cout<<"Enter first integer";//kullan�c�dan veri iste
	std::cin>>number1;//giri� de�eri   
	
	std::cout<<"Enter second integer";
	std::cin>>number2;
	
	sum=number1+number2;
	
	std::cout<<"Sum is "<<sum<<std::endl;
	
}
