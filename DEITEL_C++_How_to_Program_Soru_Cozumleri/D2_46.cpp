//Exercise 2.46 Solution
#include <iostream>
using std:: cout;
using std::endl;
using std::cin;
using std::ios;

#include <iomanip>

using std:: setw;
using std::setprecision;//ondalýk aðýrlýðý ayarlansý
using std::setiosflags;//Biçim bayraklarýný ayarla
#include <cmath>

int main(){
	double amount,principal=100.00;//miktar, anapara
	cout<<setiosflags(ios::fixed|ios::showpoint);
	
	
	for(int rate=5;rate<=10;rate++){//rate:oran
		cout<<"Interest Rate: "<<setprecision(2)<<rate/100.0<<"\n Year\t Amount on deposit|n";//setprecision:kesinlik belirlemek
	
		for(int year=1;year<=10;year++){
			amount=principal*pow(1+(rate/100.0),year);
			cout<<year<<'\t'<<setprecision(2)<<amount<<'\n';
		
	}
	cout<<'\n';	
	}
	cout<<endl;
}
