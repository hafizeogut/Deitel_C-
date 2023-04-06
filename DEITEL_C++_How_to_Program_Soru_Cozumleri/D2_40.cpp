//Excersize 2.40 Solution
#include<iostream>
using namespace std;
int main(){
	int sum=0,number,value;
	cout<<"Enter the number of values to be processed: ";
	cin>>number;
	for (int i=1;i<=number;i++){
		cout<<"Enter a value: ";
		cin>>value;
		sum+=value;
	}
	cout<<"Sum of the "<<number <<" value is "<<sum<<endl;
	
	return 0;
}
