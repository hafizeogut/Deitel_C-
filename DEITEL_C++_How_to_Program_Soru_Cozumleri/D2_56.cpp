//Exercise 2.56 Solution

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::ios;

#include <iomanip>

using std::setprecision;
using std::setiosflags;

int main()
{
	/*int py Code,managers=0,h Çalýþýr=0,c Çalýþýr=0;
	int p Eserler=0,adet;
	double m Maaþ,h Maaþ,c Maaþ,p Maaþ,saat*/
	int pyCode,managers=0,hWorkers=0,cWorkers=0;
	int pWorkers=0,pieces;
	double mSalary,hSalary,cSalary,pSalary,hours;
	double pay;
	/*ios::showbase Sayýsal sabitleri okunabilecek bir biçimde görüntüler.
C++ derleyicisi.
• ios::showpoint Kayan nokta için ondalýk noktayý ve sondaki sýfýrlarý göster
deðerler.*/
	cout<<"Enter paycode (-1 to end):"<<setiosflags(ios::fixed |ios::showpoint);
	cin>>pyCode;
	
	while(pyCode!=-1){
		switch (pyCode){
			case1:
				cout << "Manager selected.(Yönetici secildi)"
					<< "\nEnter weekly salary(Haftalýk maaþý girin): ";
					
				cin>>mSalary;
				cout<<"The manager's pay is &"<<setprecision(2)<<mSalary;
				++managers;
				break;
			case 2:
				cout<<"Hourly worker selected.\n"<<"Enter the hourly salary:";
				cin>>hSalary;
				cout<"Enter the total hourd worked:";
				cin>>hours;
				pay=hours>40.0?(hours-40)*1.5*hSalary+hSalary*40.0:
					hSalary*hours;
					
				cout<<"Worker's pay is &"<<setprecision(2)<<pay<<'\n';
				hWorkers;
				break;
				
				case 3:
					cout<<"Commission worker selected.\n"<<"Enter number of pieces ";
					 
					cout<<"Enter gross weekly sales: ";
					cin>>cSalary;
					pay=250.0+0.057*cSalary;
					cout<<"Commission Worker's pay is"<<setprecision(2)<<pay<<'\n';
					++cWorkers;
					break;
					
				case 4:
					cout<<"Piece worker selected.\n"<<"Enter number of piece: ";
					cin>>pieces;
					cout<<"piece Worker's pay code.\n"<<setprecision(2)<<pay<<'\n';
					++pWorkers;
					break;
					
				default:
					cout<<"Invalid pay code.\n";
					break;
		}
		cout<<"\n Enter paycode (-1 to end):";
		cin>>pyCode;
	}
	cout << "\n\nTotal number of managers paid : "
	<< managers
	<< "\nTotal number of hourly workers paid : "
	<< hWorkers
	<< "\nTotal number of commission workers paid: "
	<< cWorkers
	<< "\nTotal number of piece workers paid : "
	<< pWorkers << endl;

	return 0;
}
