//Exercise 2.37 B solution
#include <iostream>
using namespace std;

int main(){
	int first,second,third,fourth,decrypted,temp,num;
	
	cout<<"Enter a four digit encrypted number:";
	cin>>num;
	
	first=num/1000;
	second=num%1000/100;
	third=num%1000%100/10;
	fourth=num%1000%100%10;
	
	temp=(first+3)%10;
	first=(third+3)%10;
	third=temp;
	
	decrypted = first * 1000 + second * 100 + third * 10 + fourth;
	cout << "Decrypted number is " << decrypted << endl;
	
	return 0;
}
