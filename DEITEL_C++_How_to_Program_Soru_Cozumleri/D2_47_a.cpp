//Exercise 2.47 Solution
#include <iostream>
using std::cout;
using std::endl;

int main(){
	//Desen 1 row,col,space=satýr, sütun, boþluk
	for (int row=1; row<=10; row++){
		for (int col=1;col<=row;++col)
			
			cout<<'*';
		
		cout<<'\n';
	}
	cout<"\n";
	//Desen 2
	for (int row=10; row>=1; --row ){
		for (int col=1; col<=row; ++col)
			
			cout<<'*';
		
		cout<<'\n';
		
	}
	cout<<'\n';
	
	//Desen 3
	for(int row=10; row>=1; --row){
		for(int space =1; space<=10-row; ++space )
			cout<<' ';
			
		for(int col=1; col<=row;++col)
			cout<<'*';
			
		cout<<'\n';
	}
	cout<<'\n';
	//Desen 4
	for(int row=1; row<=10; ++row){
		for(int space =1; space<=10-row; ++space )
			cout<<' ';
			
		for(int col=1; col<=row;++col)
			cout<<'*';
			
		cout<<'\n';
	}
	cout<<endl;
	return 0;
}
