//	Exercise 1.31 Solution

#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout<<"Sayinizi giriniz";
	cin>>num;
	
	if(num % 2 == 0)
		cout << "The number " << num << " is even." << endl;
		
	if ( num % 2 != 0 )
		cout << "The number " << num << " is odd." << endl;
		
	return 0;
}
