//þekil 3.7 
//GradeBook sýnýfýndan çok sayýda nesne oluþturma
//GradeBook kurucu fonksiyonu ile her nesne oluþturulduðunda /
//GradeBook Nesnesine ders isminin atanmasý

#include<iostream>
#include<string>
using namespace std;

//GradeBook sýnýfýn tanýmlanmasý

//GradeBook sýnýfýn tanýmlanmasý
class GradeBook{
	public:
		//CourseName üye deðiþkenine string parametreli kurucu ile ilk deðer 
		explicit GradeBook(string name)
		:courseName(name)//CourseName üye deðiþkenine ilk deðer atama
	{
		//boþ gövde
		//GradeBook kurucu fonksiyonu
	}
	
	//kuýra adýný ayarlandý
	void setCourseName(string name){
		courseName=name;//ders ismini nesnede saklama
	}//setCourseName fonksiyonun sonu
	
	
	//ders ismini döndüren get fonksiyonu
	string getCourseName()const
	{
		return courseName;//courseName fonksiyonunu döndürme
	}//getCourseName fonksiyonu sonu
	
	
	//GradeBook kullanýcýna mesaj yazdýrma
	void displayMessage()const
	{
		//courseName deðerini elde etmek için getCourseNmae fonbksiyonunu çaðýrma
		cout<<"Welcome to the grade book book for \n"<<getCourseName()<<"!"<<endl;
		 
		
	}//displayMessage fonksiyonun sonu
	
	private:
		string courseName;//GradeBook için ders ismi deðiþkeni
};//GradeBook sýnýfýnýn sonu
int main(){
	//iki tane GradeBook nesnesi oluþturma
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");
	
	cout<<"GradeBook1 created for course: "<<gradeBook1.getCourseName()
	<<"\ngradeBook2 created for course: "<<gradeBook2.getCourseName()<<endl;
}
