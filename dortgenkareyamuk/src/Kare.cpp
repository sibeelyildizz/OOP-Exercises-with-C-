#include "Kare.h"

Kare::Kare()
{
    taban=0;
}
Kare::Kare(int k)
{
    kenar=k;
}

Kare::alanHesapla()
{
    return (taban*taban);
}
Kare::~Kare()
{
    //dtor
}
