#include <iostream>
#include "oyuncu.h"
#include "musabaka.h"
#include "futbol.h"

using namespace std;

int main()
{
    int oy_say;
	string *oyuncu_ad, *takimlari;
	cout<<"Oyuncu say�s�n� giriniz: "<<endl;
	cin>>oy_say;
	oyuncu_ad=new string[oy_say];
	takimlari=new string[oy_say];
	cout<<"Oyuncular�n adlar�n� ard�ndan tak�mlar�n� giriniz: "<<endl;
	for(int i=0; i<oy_say; i++)
		cin>>oyuncu_ad[i]>>takimlari[i];
	futbol ornek(160, oy_say, oyuncu_ad, takimlari, true, 61000);
	ornek.print();
	return 0;

}
