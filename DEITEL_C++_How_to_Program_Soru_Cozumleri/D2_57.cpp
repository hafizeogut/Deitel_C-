//Exercise 2.57 Solution
#include <iostream>

using std:: cout;
using std::endl;

int main(){
	int x = 10, y = 1, a = 3, b = 3,g = 5, Y = 1, i = 2, j = 9;
	cout<<"Current veriable values arre: "<<endl
	<<"x= "<<x<<",y= "<<y<<",a="<<a<<",b"<<b<<endl<<",g= "<<g<<",y= "<<y<<",i= "<<i<<",j= "<<j<<"\n\n";
	
	if ((!(x<5)&& !(y>=7))  && (!(x<5)||y>=7))
		cout << "!(x < 5) && !(y >= 7) is equivalent to"
		<< " !((x < 5) || (y >= 7))" << endl;
	else
		cout << "!(x < 5) && !(y >= 7) is not equivalent to"
		<< " !((x < 5) || (y >= 7))" << endl;
	
	if ((!(a == b) || !(g != 5)) && (!((a == b) && (g != 5))))
		cout << "!(a == b) || !(g != 5) is equivalent to"
		<< " !((a == b) && (g != 5))" << endl;
	else
		cout << "!(a == b) || !(g != 5) is not equivalent to"
		<< " !((a == b) && (g != 5))" << endl;
	
	if (!((x <= 8) && (Y > 4)) && (!((x <= 8) || (Y > 4))))
		cout << "!((x <= 8) && (Y > 4)) is equivalent to"
	<< " !((x <= 8) || (Y > 4))" << endl;
	else
		cout << "!((x <= 8) && (Y > 4)) is not equivalent to"
	<< " !((x <= 8) || (Y > 4))" << endl;
	
	if (!((i > 4) || (j <= 6)) && !((i > 4) && (j <= 6)))
		cout << "!((i > 4) || (j <= 6)) is equivalent to"
	<< " !((i > 4) && (j <= 6))" << endl;
	else
		cout << "!((i > 4) || (j <= 6)) is not equivalent to"
	<< " !((i > 4) && (j <= 6))" << endl;
	
	return 0;

}
