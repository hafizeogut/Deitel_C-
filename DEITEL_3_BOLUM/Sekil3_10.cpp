//�elil 3.10:fig 3.10

#include <iostream>
#include "GradeBook.h"
using namespace std;

//Program�n y�r�t�lmeye ba�lad��� main fonksiyonu

int main(){
	//�ki GradeBook nesnesi olu�turuldu.
	GradeBook gradeBook1("CS101 Introduction to C++ Programming ");
	GradeBook gradeBook2(" \n CS102 Data Structers in C++");
	
	//herbir GradeBook nesnesinin courseName �yesinin ilk de�erini yazd�r
	cout<<gradeBook1.getCourseName()<<endl;
	cout<<gradeBook2.getCourseName()<<endl;
}

