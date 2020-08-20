#ifndef FUTBOL_H
#define FUTBOL_H

#include <musabaka.h>
#include <iostream>
#include <string>

using namespace std;


class futbol : public musabaka
{
    public:
        futbol(int sure,int oyuncuSayisi,string *ad,string *takim,bool dep,int kapasite);

        void print()const;
        virtual ~futbol();

    protected:

    private:
        bool deplasmanMi;
	   int stadKapasitesi;

};

#endif // FUTBOL_H
