//exercise 1.35 Solution
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
	char symbol;
	
	cout<<"Enter a character:";
	cin>>symbol;
	
	cout <<symbol<<"'s integer equivalent is "
		<<static_cast<int>(symbol) <<endl;
		
	return 0;
}


