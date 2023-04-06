//Fig 3.9 GradeBook.h
//GradeBook s�n�f�nn�n main den ayr� bir dosyada tan�mlanmas�
#include <iostream>
#include <string>

//GradeBook s�n�f�n�n tan�mlanmas�
class GradeBook{
	public:
		//string arg�man alan kurucu courseName �ye fonks�yonu ile ilk de�er atama
		explicit GradeBook(std::string name)
			:courseName(name)//courseName ile �yeye ilk de�er atama
		{
			//Bo� g�vde
		}//GradeBook kurucu sonu
		
		//ders ismini atayan fonksiyon
		void setCourseName(std::string name){
			courseName=name;
		}
		
		//ders imini d�nd�ren fonksiyon
		std::string getCourseName()const
		{
			return courseName;
		}//getCourseName fonksiyonu sonu
		
		
		//GradeBook kullan�c�s� i�in kar��lama mesaj� yazd�rma
		void displayMessage() const
		{
			//courseName fonksiyonunu d�nd�rmek i�in getCourseName i �a��rma
			std::cout<<"Welcome to the grade book for \n"<<getCourseName()<<"!"<<std::endl;
		}//displayMessage fonksiyonun sonu
		
		private:
			std::string courseName;
};
