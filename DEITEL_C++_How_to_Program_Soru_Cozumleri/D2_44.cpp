//	Exercise 2.43 Solution
#include <iostream>
using namespace std;

int main(){
	long product=1;
	for (long i=3; i<=15;i+=2)
		product *=i;
		
	cout<<"Product of the odd integers from to 15 is: "<<product<<"\n"<<endl;
	
	
}
