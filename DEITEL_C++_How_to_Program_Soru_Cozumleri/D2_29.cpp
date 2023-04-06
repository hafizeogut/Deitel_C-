//Exercise 2.29 Solution Polindrom Sayý bulan c++ programý

#include <iostream>

using namespace std;

int main(){
	int number,firstDigit,secondDigit,fourthDigit,fifthDigit;// sayý,birinci Hane,ikinci Hane,dört Hane,beþinci Hane;
	cout<<"Enter a five-digit number: Bes basamaklý sayi;";
	cin>>number;
	firstDigit = number / 10000;
	secondDigit = number % 10000 / 1000;
	fourthDigit = number % 10000 % 1000 % 100 / 10;
	fifthDigit = number % 10000 % 1000 % 10;
	
	if (firstDigit == fifthDigit && secondDigit == fourthDigit)
		cout << number << " is a palindrome" << endl;
	else
		cout << number << " is not a palindrome" << endl;
	
	return 0;
	
	
}
