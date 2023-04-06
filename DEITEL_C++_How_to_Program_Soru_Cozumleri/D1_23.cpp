//Kullanýcýdan iki sayý girmesini isteyen, kullanýcýdan bu iki sayýyý alan ve bu iki sayýnýn toplamýný, 
//çarpýmýný, farkýný ve bölümünü yazdýran bir program yazýnýz.
//Excercise 1. 23 Solution
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	int num1,num2;//deðiþkenleri bildir
	cout <<"Enter two integers: ";//Kullanýcýya sor
	cin>>num1>>num2;//Deðerleri klavyeden oku
	//sonuçlarý göster
	cout <<"the sum is "<<num1+num2
	<<"\nThe product is "<<num1*num2
	<< "\nThe difference is " << num1 - num2
    << "\nThe quotient is " <<int( num1 / num2) << endl;
    
    
    return 0;//baþarý ile sonlandýrýldý
}
