// Exercise 1.30 Solution
#include<iostream>

using namespace std;

int main(){
	int num1, num2, num3, num4, num5, largest, smallest;
	cout<<"Enter five integers:";
	cin>>num1>>num2>>num3>>num4>>num5;//input
	
	largest=num1;
	smallest=num1;
	
	if (num1>largest)
		largest=num1;
		
	if (num2>largest)
		largest=num2;
		
	if (num3>largest)
		largest=num3;
		
	if (num4>largest)
		largest=num4;
		
	if (num5>largest)
		largest=num5;
		
	if (num1<smallest)
		smallest=num1;
		
	if (num2<smallest)
		smallest=num2;
		
	if (num3<smallest)
		smallest=num3;
		
	if (num4<smallest)
		smallest=num4;
		
	if (num5<smallest)
		smallest=num5;
	cout << "Largest is " << largest<< "\nSmallest is " << smallest << endl;
 
 	
	 return 0;
}
