//Exercise 2.51 Solution
#include <iostream>

using namespace std;

#include<iomanip>
using std::setw;

#include<cmath>

int main(){
	//miktar,anapara=1000,dolar,sent
	int amount,principal=1000,dollars,cents;
	double rate=.05;
	cout<<"Year"<<setw(24)<<"Amount on deposit \n";
	// Tab boþluk ile yapýlamayan bazý görünümler setw() ile kolayca yapýlabilir.
	for (int year =1;year<=10; ++year){
		amount=principal*pow(1.0+rate,year);
		cents=amount%100;
		dollars=amount;
		cout<<setw(4)<<year<<setw(21)<<dollars;
		if (cents<10)
			cout<<'0'<<cents<<endl;
			
		else
			cout<<cents<<endl;
	}
	return 0;
}
