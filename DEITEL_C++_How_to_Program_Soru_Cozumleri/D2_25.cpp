//Exercise 2.25 Solution
#include<iostream>

using std::cout;
using std::endl;

int main(){
	int row=10,column;
	
	while(row>=1){
		column=1;
		
		while(column<=10){
			cout<<(row%2 ? "<": ">");
			++column;
		}
		--row;
		cout<<endl;
			
	}
	return 0;
	
}
