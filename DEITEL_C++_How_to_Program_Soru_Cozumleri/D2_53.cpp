//Exercise 2.53 Solution
// oct, hex ve dec tanýmlayýcýlarý akýþ manipülatörleridir
// Bölüm 11'de tanýmlanan endl gibi. Manipülatör
// oct, tamsayýlarýn sekizlik olarak çýkarýlmasýna neden olur, manipülatör
// hex, tamsayýlarýn onaltýlýk olarak verilmesine neden olur ve manipülatör
// dec, tamsayýlarýn ondalýk olarak gösterilmesine neden olur.

#include <iostream>

using std::cout;
using std::endl;
using std::oct;
using std::hex;
using std::dec;

int main()
{
	cout<<"Decimal\t \t Binary\t\tOctal\tHezadecimal\n";
	
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
