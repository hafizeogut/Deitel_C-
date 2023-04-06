//Exercise 2.47 Extra Credit Solution
#include <iostream>

using std::cout;
using std::cin;

int main(){
	int row,coloumn,space;
	for (row=1; row<=10; ++row){
		//part a
		for(coloumn=1; coloumn<=row; ++coloumn)
			cout<<'*';
		
		for(space=1; space<=10-row; ++space)
			cout<<' ';
			
		cout<<'\t';
		
		//part b
		for (coloumn=10; coloumn>=row; -- coloumn)
			cout<<'*';
			
		for(space=1; space<=row; ++space)
			cout<<' ' ;
			
		cout<<'\t';
	}
}
