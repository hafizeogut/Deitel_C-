//Exercise 2.41 Solution
#include <iostream>
using namespace std;

int main(){
	int value,count=0,total=0;
	cout<<"Enter a integer (9999 to end):";
	cin>>value;
	
	while(value!=9999){
		total+=value;
		++count;
		cout<<"Enter next integer (999tý end):";
		cin>>value;
		
	}
	if (count !=0)
		cout<<"\nThe average is:"<<static_cast<double>(total)/count<<endl;
		
	else
		cout<<"\nNo values were entered. "<<endl;
		
	return 0;
}
