//þekil 3.1 þekil03_01.cpp
//displayMessage fonksiyonlu GradeBook sýnýfýný tanýmlama
//GradeBook nesnesi oluþtur ve displayMessage fonksiyonunu çaðýr
#include <iostream>
using namespace std;
 
 
//GradeBook sýnýf tanýmlama

class GradeBook{
	public:
	//fonksiyon GradeBook kullanýcýlarýna hoþgeldin yazar
	void displayMessage()const
	{
		cout<<"Welcome to Grade Book"<<endl;
		
	}//displayMessage donksiyonun sonu
};//GradeBook sýnýfýnýn sonu

//programýn yürütmeye baþlandýðý main fonksiyonu
int main(){
	GradeBook myGradeBook;//myGradeBook isimli GradeBook sýnýfý nesnesi oluþturma
	myGradeBook.displayMessage();//displayMesssage fonksiyonunu çaðýrma
}
