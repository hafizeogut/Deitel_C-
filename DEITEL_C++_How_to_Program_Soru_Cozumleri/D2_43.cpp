//Exercise 2.43 Solution
#include <iostream>

using namespace std;

int main() {
	int number,value,smallest;
	cout<<"Enter the number of integers to be processed: ";
	cin>>number;
	cout<<"Enter an integer :";
	cin>>smallest;
	
	for(int i=2;i<=number;i++){
		cout<<"Enter next integer: ";
		cin>>value;
		
		if (value<smallest) {
			smallest=value;
		}
	}
	cout<<"\nThe smallest integer is: "<<smallest<<endl;
	return 0;
}
