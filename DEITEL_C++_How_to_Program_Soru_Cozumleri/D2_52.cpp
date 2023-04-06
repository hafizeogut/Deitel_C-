//Exercise 2.53 Solution
// oct, hex ve dec tan�mlay�c�lar� ak�� manip�lat�rleridir
// B�l�m 11'de tan�mlanan endl gibi. Manip�lat�r
// oct, tamsay�lar�n sekizlik olarak ��kar�lmas�na neden olur, manip�lat�r
// hex, tamsay�lar�n onalt�l�k olarak verilmesine neden olur ve manip�lat�r
// dec, tamsay�lar�n ondal�k olarak g�sterilmesine neden olur.

#include <iostream>

using std::cout;
using std::endl;
using std::oct;
using std::hex;
using std::dec;

int main()N
{
	cout<<"Decimal\t\tBinary\t\tOctal\tHezadecimal\n";
	
	for (int loop=1;loop<=256;++loop){
		cout<<dec<<loop<<"\t\t";
		
		//Output binary number
		int number=loop;
		cout<<(number==256 ? '1':'0');
		int factor=256;
		do{
			cout<<(number<factor && number>=(factor/2) ? '1':'0');
			factor/=2;
			number %=factor;
			
		}while(factor>2);
		//output octal and hexadecimal numbers
		cout<<'\t'<<oct<<loop<<'\t'<<hex<<loop<<endl;
	}
	return 0;
}
