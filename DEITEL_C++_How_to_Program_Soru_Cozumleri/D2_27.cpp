//Exercise 2.27 Solution

#include<iostream>

using namespace std;

int main(){
	//a)
	cout<<"a"<<endl;
	int x=5,y=8;
	if ( y == 8 )
	if ( x == 5 )
	cout << "@@@@@" << endl;
	else
	cout << "#####" << endl;
	cout << "$$$$$" << endl;
	cout << "&&&&&" << endl;
	
	//b)
	cout<<"b"<<endl;
	if ( y == 8 ){
	
		if ( x == 5 )
			cout << "@@@@@\n";
		else
			cout << "#####\n";
	}	
	cout << "$$$$$\n";
	cout << "&&&&&\n\n";
	
	
	//c)
	cout<<"c"<<endl;
	if ( y == 8 )
		if ( x == 5 )
			cout << "@@@@@\n";
		else {
			cout << "#####\n";
			cout << "$$$$$\n";
			cout << "&&&&&\n\n";
		}
	cout<<"d"<<endl;
	//d
	y=7;
	if ( y == 8 )
		if ( x == 5 )
			cout << "@@@@@\n";
	else {
		cout << "#####\n";
		cout << "$$$$$\n";
		cout << "&&&&&\n";
			
	}
	
}
