#include <iostream>
#include "Dortgen.h"
#include "Kare.h"
#include "Yamuk.h"

using namespace std;

double alanHesapla(Dortgen &d){
    return d.alan();
}

int main()
{
   // yamuk y(10,20,5);
    kare k(10);  //upcast
    cout<<alanHesapla(k)<<enl;

    return 0;
}
