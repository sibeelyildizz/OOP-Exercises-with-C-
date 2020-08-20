#ifndef YAMUK_H
#define YAMUK_H

#include <Dortgen.h>


class Yamuk : public Dortgen
{
    public:
        Yamuk();
        Yamuk(double t,double y,double u);
        virtual ~Yamuk();

    protected:

    private:
        int ust;


};

#endif // YAMUK_H
