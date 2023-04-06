//Fig 3.9 GradeBook.h
//GradeBook sýnýfýnnýn main den ayrý bir dosyada tanýmlanmasý
#include <iostream>
#include <string>

//GradeBook sýnýfýnýn tanýmlanmasý
class GradeBook{
	public:
		//string argüman alan kurucu courseName üye fonksþyonu ile ilk deðer atama
		explicit GradeBook(std::string name)
			:courseName(name)//courseName ile üyeye ilk deðer atama
		{
			//Boþ gövde
		}//GradeBook kurucu sonu
		
		//ders ismini atayan fonksiyon
		void setCourseName(std::string name){
			courseName=name;
		}
		
		//ders imini döndüren fonksiyon
		std::string getCourseName()const
		{
			return courseName;
		}//getCourseName fonksiyonu sonu
		
		
		//GradeBook kullanýcýsý için karþýlama mesajý yazdýrma
		void displayMessage() const
		{
			//courseName fonksiyonunu döndürmek için getCourseName i çaðýrma
			std::cout<<"Welcome to the grade book for \n"<<getCourseName()<<"!"<<std::endl;
		}//displayMessage fonksiyonun sonu
		
		private:
			std::string courseName;
};
