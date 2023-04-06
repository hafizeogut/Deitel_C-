//Exercise 2.31 Solution
#include <iostream>

using std:: cout;
using std::endl;

int main(){
	int side=8,row;
	while(side-->0){
		row=8;
		if (side%2==0){
			cout<<' ';
		}
		
		while(row-->0)
			cout<<"* ";
			
		cout<<'\n';
	}
	cout<<endl;
	return 0;
	
}
