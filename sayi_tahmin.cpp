#include <iostream>
#include <time.h>
using namespace std;
void main()
{int rastgeleSayi, girilenSayi, denemeSayisi=0;
srand(time(0));
rastgeleSayi= rand()%11;
bas:cout<<"sayiyi giriniz... "<<endl;
cin>>girilenSayi;
if(girilenSayi==rastgeleSayi)
{denemeSayisi++;
cout<<"Tebrikler istenilen sayiyi "<<denemeSayisi<<".denemede buldunuz :)";}
else
{denemeSayisi++;
cout<<"Tekrar deneyiniz :(\n"<<"Deneme: "<<denemeSayisi<<endl;
goto bas;}}
