//Excersize 2.37 Part A solition
#include <iostream>

using namespace std;

int main(){
	int first,second,third,fourth,digit,temp;
	int encryptedNumber;
	/*int birinci, ikinci, üçüncü, dördüncü, basamak, geçici;
	int þifreliSayý;*/
	cout << "Enter a four digit number to be encrypted: ";
	cin>>digit;
	
	first = ( digit / 1000 + 7 ) % 10;
	second = ( digit % 1000 / 100 + 7 ) % 10;
	third = ( digit % 1000 % 100 / 10 + 7 ) % 10;
	fourth = ( digit % 1000 % 100 % 10 + 7 ) % 10;
	
	
	temp=first;
	second=third*1000;
	third=temp*10;
	
	temp=second;
	second=fourth*100;
	fourth=temp*1;
	
	encryptedNumber = first + second + third + fourth;
 	cout << "Encrypted number is " << encryptedNumber << endl;
 
	return 0;
	
	
}
