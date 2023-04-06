//�ekilv3.3:fig03_03.cpp
//parametre alan �ye fonksiyonlu GradeBook s�n�f�n� tan�mlama 
//GradeBook nesnesi olu�turma ve displayMessage fonksiyonuu �a��rma

#include <iostream>
#include<string>//program C++ standart string s�n�f�n� kullan�r
using namespace std;

//GradeBook s�n�f�n� tan�mlama
class GradeBook
{
	public:
		//GradeBook kullan�c�na ho� geldin mesaj� veren fonksiyon
		void displayMessage(string courseName)const
		{
			cout<<"Welcome to grade book for  "<<courseName<<"!"<<endl;
		}//displayMessage sonu
};//GradeBook  s�n�f� sonu,

//program�n y�r�t�ld��� main fonksiyonu 
int main(){
	string nameOfCourse;//ders ismini saklamak i�in de�i�ken mesajlama
	GradeBook myGradeBook;//GradeBook s�n�f�ndan myGradeBook nesnes� olu�tur
	
	//ders isminin girilmesi i�in mesaj yazma
	cout<<"Ders ismini giriniz: "<<endl;
	getline(cin,nameOfCourse);//ders ismini okuma
	cout<<endl;//bo� bir sat�r yazd�rma
	//myGradeBook nesnesinin displayMessage fonksiyonunu �a��rma
	//nameOfCourse de�erini arg�man olarak g�nderme
	myGradeBook.displayMessage(nameOfCourse);


}//main fonksiyonu sonu
