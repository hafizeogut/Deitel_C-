//Þelil 3.10:fig 3.10

#include <iostream>
#include "GradeBook.h"
using namespace std;

//Programýn yürütülmeye baþladýðý main fonksiyonu

int main(){
	//Ýki GradeBook nesnesi oluþturuldu.
	GradeBook gradeBook1("CS101 Introduction to C++ Programming ");
	GradeBook gradeBook2(" \n CS102 Data Structers in C++");
	
	//herbir GradeBook nesnesinin courseName üyesinin ilk deðerini yazdýr
	cout<<gradeBook1.getCourseName()<<endl;
	cout<<gradeBook2.getCourseName()<<endl;
}

