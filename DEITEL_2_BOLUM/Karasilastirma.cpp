//if ile ilişkisel operatör ve eşitlik operatörü kullanara iki tam sayının karşılaşturulması

#include<iostream>

using std::cout;//program cout kullanır 
using std::cin;//cin kullanılır 
using std:: endl;//program endl kullanılır


//main fonksiyopnu program icrasını başlatır
int main(){
	int number1=0;//karşılaştırılacak ilk tamsayı
	int number2=0;//karşılaştırılacak ikinci tamsayı
	
	//kullanıcıdan iki tamsayı oku
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
