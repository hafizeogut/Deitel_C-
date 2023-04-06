//Exercise 2.38 Part A Solution
#include<iostream>

using std::cout;
using std::endl;
using std::cin;
using std::ios;
#include <iomanip>
using std::setw;
using std::setprecision;
using std::setiosflags;
int main(){ 
	int n=0,accuracy=15,x=3.0,times=0,count;
	double e=1.0,exp=0.0,fact=1.0;
	
	while(n++ <=accuracy){
		count=n;
		fact *=n==0 ? 1.0:n;
		
		while(times<count){
			if (times==0)
				exp=1.0;
			exp *=x;
			++times;

		}
		e+=exp/fact;
		
	}
	cout<<setiosflags(ios::fixed| ios::showpoint)
	<<"e raised to the"<<x<<" power is "<<setprecision(4)<<e<<endl;
	
	return 0;



}


