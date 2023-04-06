//Exercise 1.26 Solution
#include<iostream>

using namespace std;

int main(){
	int num1, num2, num3, smallest, largest;//tipinde tanýmlama
	cout<<"Input three different integers: ";
	cin>>num1>>num2>>num3;//kullanýcýdan giriþ alýndýi
	largest=num1;//ilk sayý en büyük sayý olarak alýndý.
	
	if (num2>largest)
		largest=num2;
		
	if (num3>largest)
		largest=num3;
		
	smallest=num1;//deðilse en küçük deðer num1 olarak atandý.
	
	if (num2<smallest)
		smallest=num2;
		
	if(num3<smallest)
		smallest=num3;
		
	cout << "Sum is " << num1 + num2 + num3
	<< "\nAverage is " << (num1 + num2 + num3) / 3
	<< "\nProduct is " << num1 * num2 * num3
	<< "\nSmallest is " << smallest
	<< "\nLargest is " << largest << endl;
	
	return 0;
	
	
	
}
