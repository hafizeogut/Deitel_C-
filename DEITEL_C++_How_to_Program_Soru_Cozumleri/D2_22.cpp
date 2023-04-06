//Exercise 2.22 Solution 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	int counter=0,number,largest,secondLargest=0;
	
	cout<<"Enter the first number: ";
	cin>>largest;
	
	while(++counter<10){
		cout<<"Enter next number: ";
		cin>>number;
		cout<<"number:"<<number<<endl<<endl<<endl;
		
		
		if (number>largest){
			secondLargest=largest;
			cout<<"secondLargest: "<<secondLargest<<endl;
			largest=number;
			cout<<"largest: "<<largest<<endl<<endl<<endl;
			
		}
		else if(number>secondLargest){
			cout<<"number:"<<number<<endl;
			secondLargest=number;
			cout<<"secondLargest: "<<secondLargest<<endl<<endl<<endl;
			
			
		}
	}
	cout << "\nLargest is " << largest
    << "\nSecond largest is " << secondLargest << endl;
}
