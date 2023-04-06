//Exercise 2.59 Solution

#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter an odd number fpr dioman size(1-19):\n";
	cin>>size;
	
	//top half 
	for (int rows=1;rows<=size-2;rows+=2){
		for(int space=(size-rows)/2;space>0;--space)
			cout<<' ';
		for (int asterisk=1;asterisk<=rows;++asterisk)
			cout<<'*';
		cout<<'\n';
	}
	
	//bottom half
	for (int rows=size;rows>=0;rows -=2){
		
		for (int space=(size-rows)/2;space>0;--space)
			cout<<' ';
		
		for(int asterisk=1;asterisk<=rows;++asterisk)
			cout<<'*';
		cout<<'\n';
	}
	cout<<endl;
	
	
	for (int rows=1;rows<=size-1;rows+=1){
		for(int space=(size-rows);space>0;--space)
			cout<<' ';
		for (int asterisk=1;asterisk<=rows;++asterisk)
			cout<<'*';
		cout<<'\n';
	}
	for (int rows=size;rows>=0;rows -=1){
		
		for (int space=(size-rows);space>0;--space)
			cout<<' ';
		
		for(int asterisk=1;asterisk<=rows;++asterisk)
			cout<<'*';
		cout<<'\n';
	}
	for (int rows=1;rows<=size-1;rows+=1){
		for(int space=(size-rows);space>0;--space)
			cout<<' ';
		for (int asterisk=1;asterisk<=rows;++asterisk)
			cout<<'*';
		cout<<'\n';
	}
	return 0;
}
