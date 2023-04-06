//üç tam sayýnýn çarpýmýný hesaplayan program
#include <iostream>

using namespace std;//std isim uzayýndaki isimleri kullanýr.


int main(){
	int x=0;
	int y=0;
	int z=0;
	int result=0;
	cout<<"Enter three integers:";
	cin>>x>>y>>z;//kullanýcýdan veri iste
	result=x*y*z;
	cout<<"The product is:"<<result<<endl;//çarpma iþlemini atadýðým deðiþkeni yazdýr
	return 0;
		
}

