//Exercise 2.58 Solution

#include <iostream>

using std::cout;
using std::endl;

int main(){
	//to halp
	for(int row =1;row<=5;++row){
		for(int space=1 ;space<=5-row;++space)
			cout<<' ';
			
		for(int asterisk=1;asterisk<=2*row-1;++asterisk)
			cout<<'*';
		
		cout<<'\n';
			
	}
	for(int row=4; row>=1;--row){
		for(int space=1;space<=5-row;++space)
			cout<<' ';
			
		for(int asterisk=1;asterisk<=2*row-1;++asterisk)
			cout<<'*';
			
		cout<<'\n';
	}
	cout<<endl;
	
	return 0;
}
