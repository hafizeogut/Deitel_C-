//if ile ili�kisel operat�r ve e�itlik operat�r� kullanara iki tam say�n�n kar��la�turulmas�

#include<iostream>

using std::cout;//program cout kullan�r 
using std::cin;//cin kullan�l�r 
using std:: endl;//program endl kullan�l�r


//main fonksiyopnu program icras�n� ba�lat�r
int main(){
	int number1=0;//kar��la�t�r�lacak ilk tamsay�
	int number2=0;//kar��la�t�r�lacak ikinci tamsay�
	
	//kullan�c�dan iki tamsay� oku
	cout<<"Enter two integers to compare";
	cin>>number2>>number2;
	
	//
	if (number1==number2)
		cout<<number1<<"=="<<number2<<endl;
		
	if (number1!=number2)
		cout<<number1<<"!="<<number2<<endl;
		
	if (number1<number2)
		cout<<number1<<"<"<<number2<<endl;
		
	if (number1>number2)
		cout<<number1<<">"<<number2<<endl;
		
	if (number1<=number2)
		cout<<number1<<"<="<<number2<<endl;
		
	if (number1>=number2)
		cout<<number1<<">="<<number2<<endl;
}
