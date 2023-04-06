//Exercise 2.55 Solution
#include <iostream>
//https://www.bilgigunlugum.net/prog/cppprog/cpp_veri
using std::cout;
using std::endl;
//long Veri Tipi Nedir? long türündeki değişkenler 64 bitlik (8 byte) işaretli veri depolarlar. 
//Değer aralığı ne kadar?
int main(){
	int count=0;
	/*Sadece char, int ve double veri türlerinin
	 önüne aşağıda gösterilen değiştiricileri koyarak, veri tiplerinin işaret (+/-) durumunu, byte olarak boyutlarını 
	ve sınırlarını değiştirebiliriz*/
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
