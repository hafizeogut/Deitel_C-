//if ile iliþkisel operatör ve eþitlik operatörü kullanara iki tam sayýnýn karþýlaþturulmasý

#include<iostream>

using std::cout;//program cout kullanýr 
using std::cin;//cin kullanýlýr 
using std:: endl;//program endl kullanýlýr


//main fonksiyopnu program icrasýný baþlatýr
int main(){
	int number1=0;//karþýlaþtýrýlacak ilk tamsayý
	int number2=0;//karþýlaþtýrýlacak ikinci tamsayý
	
	//kullanýcýdan iki tamsayý oku
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
