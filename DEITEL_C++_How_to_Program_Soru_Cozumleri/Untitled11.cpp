 // Exercise 2.47 Solution
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int row, column, space;
	 
	for ( row = 1; row <= 10; ++row )  
	 
	// part a
		for ( column = 1; column <= row; ++column )
	 
			cout << '*';
	 
		for ( space = 1; space <= 10 - row; ++space )
			cout << ' ';
	 
		cout << '\t';
}
