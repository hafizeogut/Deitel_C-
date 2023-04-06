//Exercise 2.38 Part A Solution
#include<iostream>

using namespace std;

int main(){ 
	int n=0,fact=1,accuracy=10;
	
	double e =1;
	while(++n <accuracy){
		fact*=n;
		e+=1.0/fact;
	}
	cout<<"e is"<<e<<endl;
	return 0;
}

