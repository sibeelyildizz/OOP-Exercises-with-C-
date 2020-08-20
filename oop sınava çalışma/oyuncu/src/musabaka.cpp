#include "musabaka.h"

musabaka::musabaka()
{
    //ctor
}
musabaka::musabaka(int sure,int oyuncuSayisi,string *ad,string *takim)
{
    sure=sure;
    oyuncuSayisi=oyuncuSayisi;
    oyuncular=new oyuncu[oyuncuSayisi];

    for(int i=0;i<oyuncuSayisi;i++){
        oyuncular[i].setParam(ad[i],takim[i]);
    }
}
void musabaka::print()const{
    cout<<"sure:"<<sure<<endl;
    cout<<"oyuncu sayisi"<<oyuncuSayisi<<endl;
    cout<<"oyuncular:";
    for(int i=0; i<oyuncuSayisi; i++)
		oyuncular[i].print();

}
musabaka::~musabaka()
{
    delete [] oyuncular;
}
