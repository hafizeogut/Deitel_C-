//Exercise 2.45 Solution

#include <iostream>

using namespace std;

int main(){
	int factorial;
	cout<<"X\t Factorial of X\n";
	for (int i=1;i<=5;++i){
		factorial=1;
		for (int j=1;j<=i;++j)
			factorial *=j;
			
		cout<<i<<'\t'<<factorial<<'\n';
	}
	cout<<endl;
	return 0;
}
