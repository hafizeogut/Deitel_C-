//Exercise 2.47 Extra Creadit Solition

#include <iostream>

using std::cout;

using std::endl;

int main(){
	//Desen 1 row,col,space=satýr, sütun, boþluk
	int row,column,space;
	
	for(row=1;row<=10;++row){
		//part a
		for(column=1;column<=row;++column){
			cout<<'*';
		}
	 
		
 
		for(space =1;space<=10-row;++space){
			cout<<' ';
		}
		cout << '\t';
		
		// part b
		for ( column = 10; column >= row; --column )
			cout << '*';
	 
	    for ( space = 1; space < row; ++space )
			cout << ' ';
		
		cout << '\t';
		
		 // part c
		for ( space = 10; space > row; --space )
			cout << ' ';
		
		for ( column = 1; column <= row; ++column )
			cout << '*';
		
		cout << '\t';
		
		// part d
	    for ( space = 1; space < row; ++space )
			cout << ' ';
		
		for ( column = 10; column >= row; --column )
			cout << '*';
		
		cout << endl;
		 
		
		return 0;
	}
	 
	
}
