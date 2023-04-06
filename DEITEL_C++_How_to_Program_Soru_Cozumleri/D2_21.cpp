//Exercise 2.21 Solution

#include <iostream>

using std:: cout;
using std::endl;

int main(){
	int n=0;
	cout<<"N\t10 * N\t100*N\t1000* \n\n";
	while(++n<=5){
		cout << n << '\t' << 10 * n << '\t' << 100 * n
		<< '\t' << 1000 * n << '\n';
	}
	cout<<endl;
	return 0;
}
