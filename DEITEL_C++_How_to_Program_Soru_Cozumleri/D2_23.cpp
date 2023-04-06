//Exercise 2.23 Solution

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	int passes=0, failures=0,student=0,result;
	while(++student<10){
		cout<<"Enter result (1=pass,2=fail):  ";
		cin >>result;
		
		while (result!=1 && result!=2){
			cout << "Invalid result"
			<< "\nEnter result (1=pass, 2=fail): ";
			cin >> result;
			
		}
		if (result==1){
			++passes;
		}
		else 
			++failures;
			
	}
	cout<<"Passed: "<<passes
		<<"\n Failed: "<<failures;
		
	if(passes>=8)
		cout<<"\n Raise tuition\n";
		
	cout<<endl;
	
	return 0;
}
