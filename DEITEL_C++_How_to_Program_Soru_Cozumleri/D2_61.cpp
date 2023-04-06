//2.61 Exercise Solution
#include <iostream>

using namespace std;

int main(){
	int i,j,k;
	for(i=1; i<=5; i++){
		for(j=1;j<=3;j++){
			for(k=1;k<=4;k++)
				cout<<'*';
			cout<<endl;
		}
		cout<<endl;
	}
}
