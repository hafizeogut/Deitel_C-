//Excercise 1.27 Solution
#include<iostream>

using namespace std;

int main(){
	int radius;//tan�mlama i�lemi yap�ld�.
	
	cout << "Enter the circle radius: "; // prompt
	cin >> radius;//yaricap de�eri kullan�c�dan al�nd�.
	
	cout << "Diameter is " << radius * 2.0
	<< "\nCircumference is " << 2 * 3.14159 * radius
	<< "\nArea is " << 3.14159 * radius * radius << endl;
	
	return 0;
	
	
}
