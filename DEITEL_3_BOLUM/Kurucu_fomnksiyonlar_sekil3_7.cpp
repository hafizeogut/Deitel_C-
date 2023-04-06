//�ekil 3.7 
//GradeBook s�n�f�ndan �ok say�da nesne olu�turma
//GradeBook kurucu fonksiyonu ile her nesne olu�turuldu�unda /
//GradeBook Nesnesine ders isminin atanmas�

#include<iostream>
#include<string>
using namespace std;

//GradeBook s�n�f�n tan�mlanmas�

//GradeBook s�n�f�n tan�mlanmas�
class GradeBook{
	public:
		//CourseName �ye de�i�kenine string parametreli kurucu ile ilk de�er 
		explicit GradeBook(string name)
		:courseName(name)//CourseName �ye de�i�kenine ilk de�er atama
	{
		//bo� g�vde
		//GradeBook kurucu fonksiyonu
	}
	
	//ku�ra ad�n� ayarland�
	void setCourseName(string name){
		courseName=name;//ders ismini nesnede saklama
	}//setCourseName fonksiyonun sonu
	
	
	//ders ismini d�nd�ren get fonksiyonu
	string getCourseName()const
	{
		return courseName;//courseName fonksiyonunu d�nd�rme
	}//getCourseName fonksiyonu sonu
	
	
	//GradeBook kullan�c�na mesaj yazd�rma
	void displayMessage()const
	{
		//courseName de�erini elde etmek i�in getCourseNmae fonbksiyonunu �a��rma
		cout<<"Welcome to the grade book book for \n"<<getCourseName()<<"!"<<endl;
		 
		
	}//displayMessage fonksiyonun sonu
	
	private:
		string courseName;//GradeBook i�in ders ismi de�i�keni
};//GradeBook s�n�f�n�n sonu
int main(){
	//iki tane GradeBook nesnesi olu�turma
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");
	
	cout<<"GradeBook1 created for course: "<<gradeBook1.getCourseName()
	<<"\ngradeBook2 created for course: "<<gradeBook2.getCourseName()<<endl;
}
