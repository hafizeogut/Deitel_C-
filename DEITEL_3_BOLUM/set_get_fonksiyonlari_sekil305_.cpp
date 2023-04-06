//fig.3.5:fig03_05.cpp
//courseName üye deðiþkenini iceren GreakBook sýnýfýnýn tanýmlanmasý 
//set ve get fonksiyonlarý
//GradeBook nesnesini oluþtur ve C++  standart ve bu fonksiyonlarla iþlem yap

#include <iostream>

#include<string>//C++ String sýnýfýný kullanýr
using namespace std;

//GradeBook sýnýfýný tanýmlama
class GradeBook{//ders þsmi için set fonks,yonu
	public:
		//ders ismi için set fonksiyonu
		
		void setCourseName(string name)//set:ayarlamak
		{
			courseName=name;//ders ismini nesnede saklama
			//setCourseName fonksiyonu sonu
		}
		//ders ismi döndüren fonksiyon
		string getCourseName()const
		{
			return courseName;//nesnenin courseName deðiþken deðerini döndür
		}//getCourseNmae fonksiyonu sonu
		//karþýlama mesajý yazdýran fonksiyon
		void displayMessage() const 
		{
			//bu ifade GradeBook nesnesinin getCourseName fonksiyonunu ders ismini yazdýrmak için çaðýrýr
			cout<<"Welcome to grade book for  "<<getCourseName()<<"!"<<endl;
		}//displayMessage() fonksiyonu sonu
	private:
		string courseName;//GradeBook ders ismi
		
		
	
};//GradeBook sýnýfýnýn sonu

//programýn baþladýðý main fonksiyonu
int main(){
	string nameOfCourse;//ders ismini saklamak üzere string deðiþken tanýmý
	GradeBook myGradeBook;//GradeBook sýnýfýndan,myGradeBook nesnesi oluþduruldu
	
	//courseName ilk deðerini yazdýrma
	cout<<"Intial course name is:";<<myGradeBook.getCourseName()<<endl;
	
	//ders ismini girmek için ve ders ismini atamak için mesaj
	cout<<"\n Please enter the course name is:"<<endl;
	getline(cin,nameOfCourse,nameOfCourse);//boþluk içeren ders ismini okuma
	myGradeBook.setCourseName(nameOfCourse);//ders ismini atama
	cout<<endl;//boþ bir satýr yazdýrma
	
	myGradeBook.displayMessage();//ders ismi ile mesaj yazdýr.
}//main fonksiyonu

