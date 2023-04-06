//Excercise 1.27 Solution
#include<iostream>

using namespace std;

int main(){
	int radius;//tanýmlama iþlemi yapýldý.
	
	cout << "Enter the circle radius: "; // prompt
	cin >> radius;//yaricap deðeri kullanýcýdan alýndý.
	
	cout << "Diameter is " << radius * 2.0
	<< "\nCircumference is " << 2 * 3.14159 * radius
	<< "\nArea is " << 3.14159 * radius * radius << endl;
	
	return 0;
	
	
}
