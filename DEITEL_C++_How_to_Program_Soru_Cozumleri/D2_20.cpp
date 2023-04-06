//Exercise 2.20 solution

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	int counter=0,number,largest;
	cout<<"Enter the first number: ";
	cin>>largest;
	
	while(++counter<10){
		cout<<"Enter the next number: ";
		cin>>number;
		
		if (number>largest)
			largest=number;
			
	}
	cout<<"Largest is"<<largest <<endl;
	
	return 0;
}
