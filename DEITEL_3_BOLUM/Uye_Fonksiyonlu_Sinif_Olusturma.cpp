//�ekil 3.1 �ekil03_01.cpp
//displayMessage fonksiyonlu GradeBook s�n�f�n� tan�mlama
//GradeBook nesnesi olu�tur ve displayMessage fonksiyonunu �a��r
#include <iostream>
using namespace std;
 
 
//GradeBook s�n�f tan�mlama

class GradeBook{
	public:
	//fonksiyon GradeBook kullan�c�lar�na ho�geldin yazar
	void displayMessage()const
	{
		cout<<"Welcome to Grade Book"<<endl;
		
	}//displayMessage donksiyonun sonu
};//GradeBook s�n�f�n�n sonu

//program�n y�r�tmeye ba�land��� main fonksiyonu
int main(){
	GradeBook myGradeBook;//myGradeBook isimli GradeBook s�n�f� nesnesi olu�turma
	myGradeBook.displayMessage();//displayMesssage fonksiyonunu �a��rma
}
