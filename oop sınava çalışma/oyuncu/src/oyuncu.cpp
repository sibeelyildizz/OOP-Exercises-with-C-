#include "oyuncu.h"
#include <iostream>

using namespace std;
oyuncu::oyuncu(){
    ad="";     takim="";
}
void oyuncu::setParam(string a,string t)
{
    ad=a;
    takim=t;
}
void oyuncu::print()const{
    cout<<"ad:"<<ad<<endl;
    cout<<"takim:"<<takim<<endl;

}
oyuncu::~oyuncu()
{
    //dtor
}
