#include <iostream> 
using namespace std;
void main()
{
char islem; 
float sayi1, sayi2, sonuc;
cout<<"************ISLEMLER****************"<<endl;
cout<<"Toplama (+) \nCikarma (-) \nCarpma  (*) \nBolme   (/)\n";
cout<<endl;
cout<<"************HESAPLAMA**************"<<endl;
cout<<"<sayi1> <islem> <sayi2>"<<endl;
cin>>sayi1>>islem>>sayi2;
switch(islem)
{ 
case '+' : sonuc = sayi1 + sayi2; break ;
case '-' : sonuc = sayi1 - sayi2; break ; 
case '*' : sonuc = sayi1 * sayi2; break ;
case '/' : sonuc = sayi1 / sayi2; break ; 
default: cout<< " hatali islem" ; } 
		   cout<<"Sonuc = " <<sonuc<<endl;}