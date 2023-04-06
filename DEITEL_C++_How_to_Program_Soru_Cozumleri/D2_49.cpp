//Exercise 2.49 Solution

#include <iostream>

using std:: cout;
using std:: endl;
using std::cin;
using std::ios;

#include <iomanip>
using std:: setprecision;
using std::setiosflags;
int main(){
	int product,quantity;
	double total=0.0;
	
	cout<<"Enter pairs of item numbers and quantities. "
		<<"\nEnter -1 for the item number to end input:";
		
	cin>>product;
	
	while(product!=-1){
		cin>>quantity;
	
	switch(product){
		case 1:
			total+=quantity*2.98;
			break;
					
		case 2:
			total+=quantity*4.50;
			break;
			
		case 3:
			total+=quantity*9.98;
			break;
		case 4:
			total+=quantity*4.49;
			break;
			
		case 5:
			total+=quantity*2.98;
			break;
		default:
			cout << "Invalid product code: " << product
			<< "\n Quantity(miktar): " << quantity << '\n';
			break;
		}
		cout << "Enter pairs of item numbers and quantities.\n"
		<< "Enter -1 for the item number to end input: ";
		cin >> product;
	}
	
	cout <<setiosflags(ios::fixed|ios::showpoint)<<total<<endl;
	return 0;
}
