#ifndef SMARTP_H
#define SMARTP_H

#include <mobileP.h>


class smartP : public mobileP
{
    public:
        smartP();
        void print() const;
        bool buyukMu(smartP &);
        smartP(string, int, int, int, int, int *, string = "DDR3", int = 2048);
     	smartP(const smartP &);

        virtual ~smartP();

    protected:

    private:
        int noOfProgs, *memUseOfProgs;
	   memory internal;

};

#endif // SMARTP_H
