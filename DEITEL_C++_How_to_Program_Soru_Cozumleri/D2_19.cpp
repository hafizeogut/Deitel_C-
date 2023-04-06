//Exerxise 2.19 Solution

#include <iostream>

using std::cout;
using std::cin;
using std::ios;

#include<iomanip>

using std::setprecision;
using std::setiosflags;


int main(){
	double hours,rate,salary;
	cout<<"Enter hours worked (-1 to end:)"
		<<setiosflags(ios::fixed | ios::showpoint);
		
	cin>>hours;
	
	
	while(hours!= -1.0){
		cout<<"Enter hourly rate pf the worker (&00.00):";
		cin>>rate;
		
		if (hours<=40)
			salary=hours*rate;
		 else
		 	salary=40.0*rate+(hours -40.0)*rate*1.5;
		 	
		cout <<"Salary is &"<<setprecision(2)<<salary
				<<"\n Enter hours wprled)-1 to end): ";
				
		cin>>hours;
	}
	return 0;
}
