#ifndef MUSABAKA_H
#define MUSABAKA_H
#include "oyuncu.h"
#include <iostream>

using namespace std;



class musabaka
{
    public:
        musabaka();
        musabaka(int sure,int oyuncuSayisi,string *ad,string *takim);
        void print()const;
        virtual ~musabaka();

    protected:

    private:
        int sure,oyuncuSayisi;
        oyuncu* oyuncular;
};

#endif // MUSABAKA_H
