//Exercise 2.30 Solution

#include <iostream>

using namespace std;
int main()
{
	int binary,number,decimal=0,highBit=16,factor=10000;
	
	cout << "Enter a binary number (5 digits maximum): ";
	cin>>binary;
	
	
	number =binary;
	
	while(highBit>=1){
		decimal=decimal+(binary/factor*highBit);
		highBit/=2;
		binary %=factor;
		highBit/=10;
	}
	cout << "The decimal equivalent of "
	<< number << " is " << decimal << endl;
 
	return 0;
}
