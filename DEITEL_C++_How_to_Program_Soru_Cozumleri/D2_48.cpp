//Exercise  Solution.
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	int number;
	cout<<"Enter  numbers between and  30:"  ;
	
	for (int i=1;i<=5; ++i){
		cin >>number;
		 for (int j=1; j<=number;++j)
		 	cout<<'*';
		
		cout<<'\n';
	}
	cout<<endl;
	
	return 0;
}
