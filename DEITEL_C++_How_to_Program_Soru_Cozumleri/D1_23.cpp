//Kullan�c�dan iki say� girmesini isteyen, kullan�c�dan bu iki say�y� alan ve bu iki say�n�n toplam�n�, 
//�arp�m�n�, fark�n� ve b�l�m�n� yazd�ran bir program yaz�n�z.
//Excercise 1. 23 Solution
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	int num1,num2;//de�i�kenleri bildir
	cout <<"Enter two integers: ";//Kullan�c�ya sor
	cin>>num1>>num2;//De�erleri klavyeden oku
	//sonu�lar� g�ster
	cout <<"the sum is "<<num1+num2
	<<"\nThe product is "<<num1*num2
	<< "\nThe difference is " << num1 - num2
    << "\nThe quotient is " <<int( num1 / num2) << endl;
    
    
    return 0;//ba�ar� ile sonland�r�ld�
}
