//Excers,ze 2.36 Solution

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	do{
		cout<<"Enter three integers: ";
		cin>>a>>b>>c;
		
	}while(a<=0|| b<=0|| c<=0);
	
	if (c*c==a*a+b*b)
	cout << "The three integers are the"
	<< " sides of a right triangle\n";
	else
		cout << "The three integers are not the"
	 << " sides of a right triangle\n";
}
