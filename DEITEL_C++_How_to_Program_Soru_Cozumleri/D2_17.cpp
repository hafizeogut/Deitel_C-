//Excercise 2.17 Solut,on

#include <iostream>

using namespace std;

#include<iomanip>
/*iomanip iþlevleri
get_money
get_time
put_money
put_time
quoted
resetiosflags
setbase
setfill
setiosflags
setprecision Ondalýk hassasiyeti ayarlanmasý adýna kullanýlan bir fonksiyondur
setw

get
using std::setprecision;
using std:: setiosflags;
*/
int main(){
	int accountNumber;//hesap numrasý
	
	double balance,charges,credits,limit;//bakiye, masraflar, krediler, limit
	
	cout <<"Enter account number )-1 to end)"
		<<setiosflags(ios::fixed | ios::showpoint);
	cin>>accountNumber;
	
	while (accountNumber!=-1){
		cout << "Enter beginning balance: ";
		cin >> balance;
		cout << "Enter total charges: ";
		cin >> charges;
		cout << "Enter total credits: ";
		cin >> credits;
		cout << "Enter credit limit: ";
		cin >> limit;
		balance += charges - credits;
		
		if(balance>limit)
			cout <<"Acoount        "<<accountNumber
				<<"\n Credi Limit:  "<<setprecision(2)<<limit
				<<"\n Balance :       "<<setprecision(2)<<balance
				<<"\n Credit Limit Exceeded.\n";
				
		cout<<"\n Enter account number (-1 to end):  ";
		cin>>accountNumber;
		
			
	}
	cout<<endl;
	return 0;
	
}
