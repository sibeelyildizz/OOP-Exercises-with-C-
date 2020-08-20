#include "mobileP.h"

mobileP::mobileP(string m ,int e,int b ,int k)
{
    markaModel=m;
    en=e;
    boy=b;
    kalinlik=k;
}

bool mobileP::buyukMu(const mobileP & a){

    return ((en*boy*kalinlik)>(a.en*a.boy*a.kalinlik));
}
void mobileP::print() const{
	cout <<  markaModel << endl;
	cout << en << boy << kalinlik << endl;
}

mobileP::~mobileP()
{
    //dtor
}
