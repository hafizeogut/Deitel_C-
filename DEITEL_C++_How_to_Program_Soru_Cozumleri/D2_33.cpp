//Exercise 2.33 Solution
#include<iostream>

using namespace std;

int main(){
	double radius,pi=3.14159;
	
	cout<<"Enter the radius: ";
	cin>>radius;
	
	cout << "The diameter is " << radius * 2.0
	<< "\nThe circumference is " << 2.0 * pi * radius
	<< "\nThe area is " << pi * radius * radius << endl;
	
	return 0;
	
}
