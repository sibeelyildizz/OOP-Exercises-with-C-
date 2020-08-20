#include "futbol.h"

futbol::futbol(int sure,int oyuncuSayisi,string *ad,string *takim,bool dep,int kapasite):musabaka(sure,oyuncuSayisi,ad,takim)
{
    deplasmanMi=dep;
    stadKapasitesi=kapasite;
}
void futbol::print()const{
    musabaka::print();
    cout<<"deplasman mı: "<<deplasmanMi<<endl <<"stad kapasitesi: "<<stadKapasitesi<<endl;

}

futbol::~futbol()
{
    //dtor
}
