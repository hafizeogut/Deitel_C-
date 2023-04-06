//Exercise 2.63 Solution

#include <iostream>

using namespace std;

int main(){

	for (int day=1; day<13;day++){
		
		switch(day){
			case 1:
				cout<<"first";
				break;
			case 2:
				cout<<"Hafize";
				break;
			case 3:
				cout<<"Ogut";
				break;
				
			case 4:
				cout<<" Usak 64";
				break;
			case 6:
				cout<<"Tarhana";
				break;
			case 7:
				cout << "seventh";
				break;
			case 8:
				cout << "eighth";
				break;
			case 9:
				cout << "nineth";
				break;
			case 10:
				cout << "tenth";
				break;
	 		case 11:
				cout << "eleventh";
				break;
			case 12:
				cout << "twelfth";
				break;

		}
		cout << " day of Christmas,\nMy true love sent to me:\n";
 
		switch ( day ) { // switch for gifts
			case 12:
				cout << "\tTwelve drummers drumming,\n";
			case 11:
				cout << "\tEleven pipers piping,\n";
			case 10:
				cout << "\tTen lords a-leaping,\n";
			case 9:
				cout << "\tNine ladies dancing,\n";
			case 8:
				cout << "\tEight maids a-milking,\n";
			case 7:
				cout << "\tSeven swans a-swimming,\n";
			case 6:
				cout << "\tSix geese a-laying,\n";
			case 5:
				cout << "\tFive golden rings,\n";
			case 4:
				cout << "\tFour calling birds,\n";
			case 3:
				cout << "\tThree French hens,\n";
			case 2:
				cout << "\tTwo turtle doves, and\n";
			case 1:
				cout << "A partridge in a pear tree.\n\n\n";
		}
	}	
	cout<<endl;
	return 0;
	
}
