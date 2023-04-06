//fig.3.5:fig03_05.cpp
//courseName �ye de�i�kenini iceren GreakBook s�n�f�n�n tan�mlanmas� 
//set ve get fonksiyonlar�
//GradeBook nesnesini olu�tur ve C++  standart ve bu fonksiyonlarla i�lem yap

#include <iostream>

#include<string>//C++ String s�n�f�n� kullan�r
using namespace std;

//GradeBook s�n�f�n� tan�mlama
class GradeBook{//ders �smi i�in set fonks,yonu
	public:
		//ders ismi i�in set fonksiyonu
		
		void setCourseName(string name)//set:ayarlamak
		{
			courseName=name;//ders ismini nesnede saklama
			//setCourseName fonksiyonu sonu
		}
		//ders ismi d�nd�ren fonksiyon
		string getCourseName()const
		{
			return courseName;//nesnenin courseName de�i�ken de�erini d�nd�r
		}//getCourseNmae fonksiyonu sonu
		//kar��lama mesaj� yazd�ran fonksiyon
		void displayMessage() const 
		{
			//bu ifade GradeBook nesnesinin getCourseName fonksiyonunu ders ismini yazd�rmak i�in �a��r�r
			cout<<"Welcome to grade book for  "<<getCourseName()<<"!"<<endl;
		}//displayMessage() fonksiyonu sonu
	private:
		string courseName;//GradeBook ders ismi
		
		
	
};//GradeBook s�n�f�n�n sonu

//program�n ba�lad��� main fonksiyonu
int main(){
	string nameOfCourse;//ders ismini saklamak �zere string de�i�ken tan�m�
	GradeBook myGradeBook;//GradeBook s�n�f�ndan,myGradeBook nesnesi olu�duruldu
	
	//courseName ilk de�erini yazd�rma
	cout<<"Intial course name is:";<<myGradeBook.getCourseName()<<endl;
	
	//ders ismini girmek i�in ve ders ismini atamak i�in mesaj
	cout<<"\n Please enter the course name is:"<<endl;
	getline(cin,nameOfCourse,nameOfCourse);//bo�luk i�eren ders ismini okuma
	myGradeBook.setCourseName(nameOfCourse);//ders ismini atama
	cout<<endl;//bo� bir sat�r yazd�rma
	
	myGradeBook.displayMessage();//ders ismi ile mesaj yazd�r.
}//main fonksiyonu

