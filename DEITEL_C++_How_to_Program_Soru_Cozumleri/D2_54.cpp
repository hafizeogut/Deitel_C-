//	Exercise 2.54 Solution
#include <iostream>

using namespace std;

#include <iomanip>

using std::setprecision;
using std::setiosflags;

int main(){
	long double p1=0.0,num=4.0,denom=1.0;
	long accuracy=4;
	//fixed Kayan noktal� say�lar� sabit bi�imde g�r�nt�leyin.
	//showpoint Kayan nokta i�in ondal�k noktay� ve sondaki s�f�rlar� g�ster de�erler.
	cout<<setiosflags(ios::fixed|ios::showpoint)
	<<"Accuracy set at: "<<accuracy<<"\nterm\t\t p1\n";
	
	for (long loop=1;loop<=accuracy;++loop){
		if (loop%2!=0)
			p1+=num/denom;
		else
			p1-=num/denom;
			
		cout<<loop<<"\t\t"<<setprecision(8)<<p1<<'\n';
		denom+=2.0;
		
	}
	cout<<endl;
	
}
