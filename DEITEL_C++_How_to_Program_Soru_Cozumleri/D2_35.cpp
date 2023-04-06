//exercise 2.35 Solution 
#include <iostream>

using namespace std;
int main(){
	double a,b,c;
	cout<<"Enter three floathing point numbers: ";
	cin>>a>>b>>c;
	
	if (c*c==a*a+b*b)
		cout<<"There numbers could"
			<<"be sides of a right triangle"<<endl;
			
	else
		cout<<cout << "The three numbers probably"
		<< " are not the sides of a right triangle" << endl;
		
	return 0;
	
}
