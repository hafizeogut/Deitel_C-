//Þekilv3.3:fig03_03.cpp
//parametre alan üye fonksiyonlu GradeBook sýnýfýný tanýmlama 
//GradeBook nesnesi oluþturma ve displayMessage fonksiyonuu çaðýrma

#include <iostream>
#include<string>//program C++ standart string sýnýfýný kullanýr
using namespace std;

//GradeBook sýnýfýný tanýmlama
class GradeBook
{
	public:
		//GradeBook kullanýcýna hoþ geldin mesajý veren fonksiyon
		void displayMessage(string courseName)const
		{
			cout<<"Welcome to grade book for  "<<courseName<<"!"<<endl;
		}//displayMessage sonu
};//GradeBook  sýnýfý sonu,

//programýn yürütüldüðü main fonksiyonu 
int main(){
	string nameOfCourse;//ders ismini saklamak için deðiþken mesajlama
	GradeBook myGradeBook;//GradeBook sýnýfýndan myGradeBook nesnesþ oluþtur
	
	//ders isminin girilmesi için mesaj yazma
	cout<<"Ders ismini giriniz: "<<endl;
	getline(cin,nameOfCourse);//ders ismini okuma
	cout<<endl;//boþ bir satýr yazdýrma
	//myGradeBook nesnesinin displayMessage fonksiyonunu çaðýrma
	//nameOfCourse deðerini argüman olarak gönderme
	myGradeBook.displayMessage(nameOfCourse);


}//main fonksiyonu sonu
