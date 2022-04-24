#include <iostream>
#include <time.h>
using namespace std;
void main()
{int rastgeleSayi, girilenSayi, denemeSayisi=0;
srand(time(0));
rastgeleSayi= rand()%51;
cout<<"*******SAYI TAHMIN ETME OYUNU********\n"<<endl;
bas:cout<<"sayiyi giriniz... "<<endl;
cin>>girilenSayi;
if(girilenSayi==rastgeleSayi)
{denemeSayisi++;
cout<<"Tebrikler istenilen sayiyi "<<denemeSayisi<<".denemede buldunuz :)"<<endl;}
else
{denemeSayisi++;
	if(girilenSayi>rastgeleSayi)
		cout<<"Daha kucuk bir deger girin:  :(\n"<<"Deneme: "<<denemeSayisi<<"\n"<<endl;
	else
		cout<<"Daha buyuk bir deger girin:  :(\n"<<"Deneme: "<<denemeSayisi<<"\n"<<endl;
goto bas;}}
