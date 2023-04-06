//iki tam sayýnýn toplamýný gösteren program
#include <iostream>//girdi veçýktý deðerelri iþlemleri için programa izin verir

int main(){
	int number1=0;//toplanacak ilk tamsayý
	int number2=0;//toplanacak ikinci tamsayý
	int sum=0;//number1 ve number2 deðerlerini topla
	
	std::cout<<"Enter first integer";//kullanýcýdan veri iste
	std::cin>>number1;//giriþ deðeri   
	
	std::cout<<"Enter second integer";
	std::cin>>number2;
	
	sum=number1+number2;
	
	std::cout<<"Sum is "<<sum<<std::endl;
	
}
