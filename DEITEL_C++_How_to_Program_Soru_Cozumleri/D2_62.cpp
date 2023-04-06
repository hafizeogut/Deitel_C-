//Exercise 2.62 Solution
#include<iostream>

using namespace std;

int main(){
	for(int x=1; x<=10; ++x){
		if(x==5)
			++x;
			
		cout<<x<<' ';
	}
	cout << "\nUsed ++x to skip printing the value 5" << endl;
	
	 return 0;
}
