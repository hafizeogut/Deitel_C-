//Exercise 2.55 Solution
#include <iostream>
//https://www.bilgigunlugum.net/prog/cppprog/cpp_veri
using std::cout;
using std::endl;
//long Veri Tipi Nedir? long t�r�ndeki de�i�kenler 64 bitlik (8 byte) i�aretli veri depolarlar. 
//De�er aral��� ne kadar?
int main(){
	int count=0;
	/*Sadece char, int ve double veri t�rlerinin
	 �n�ne a�a��da g�sterilen de�i�tiricileri koyarak, veri tiplerinin i�aret (+/-) durumunu, byte olarak boyutlar�n� 
	ve s�n�rlar�n� de�i�tirebiliriz*/
	long int hyptSquared,sidesSquared;
	for(long side1=1; side1<=500;++side1){
		for(long side2=1; side2<=500;++side2){
			for (long hypt=1;hypt<=500;++hypt){
				hyptSquared=hypt*hypt;
				sidesSquared=side1*side1+side2*side2;
				
				if(hyptSquared==sidesSquared){
					cout<<side1<<'\t'<<side2<<'\t'<<hypt<<'\n';
					++count;
				}
			}
		}
	}
	cout<<"A total of "<<count <<"Triles were found"<<endl;
	
}
