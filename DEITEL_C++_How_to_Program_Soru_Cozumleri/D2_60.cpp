//Exercise 2.60 Solution
#include <iostream>

using namespace std;

int main(){
	bool breakOut=false;
	int x;
	for(int x=1;x<=10 && !breakOut;++x){
		if(x==4)
			breakOut=true;
			
		cout<<x<<' ';
	}
	cout<<"\n Broke out of loop at x= "<<x<<endl;
	return 0;
}
