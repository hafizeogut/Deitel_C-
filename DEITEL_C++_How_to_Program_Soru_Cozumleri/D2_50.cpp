//Exercise 2.50 Solution

#include<iostream>

using namespace std;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::setiosflags;

int main(){
	int grade,gradeTotal=0, gradeCount,aCount=0,
	bCount=0,cCount=0,dCount=0,fCount;
	
	cout<<"Enter the letter grades."<<"\n Enter the POP charecter to and input.\n"
	<<setiosflags(ios::fixed| ios::showpoint);
	
	while((grade=cin.get())!=EOF)//cin.get() boþluk içeren bir dizi okur
	{
		switch(grade){
			case 'A': case 'a':
				gradeTotal +=4;
				++aCount;
				break;
			case 'B': case'b':
				gradeTotal +=3;
				++bCount;
				break;
				
			case 'C':case 'c':
				gradeTotal +=2;
				++cCount;
				break;
				
			case 'D':case'd':
				++gradeTotal;
				++dCount;
				break;
				
			case 'F':case 'f':
				++fCount;
				break;
				
			case ' ': case'\n':
				break;
				
			default: 
				cout << "Incorrect letter grade entered."
				<< " Enter a new grade.\n";
				break;
		}
	}
	gradeCount=aCount + bCount + cCount + dCount + fCount;
	if (gradeCount!=0)
		cout << "\nThe class average is: " << setprecision( 1 )
		<< static_cast< double > ( gradeTotal ) / gradeCount
		<< endl;
		
	return 0;
	
}
