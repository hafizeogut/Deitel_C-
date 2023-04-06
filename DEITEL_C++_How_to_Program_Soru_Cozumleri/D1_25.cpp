//Exercise . Solution
#include <iostream>
using namespace std;

int main(){
	int num1,num2;
	cout<<"Enter two integers :";
	cin>>num1>>num2;
	
	if (num1==num2)
		cout<<"Sayilar esit";
		
	if(num1>num2)
		cout<<num1<<" buyuktur." ;
		
	if (num1<num2)
		cout<<num1<<" kucuktur." ;
		
	return 0;
}
