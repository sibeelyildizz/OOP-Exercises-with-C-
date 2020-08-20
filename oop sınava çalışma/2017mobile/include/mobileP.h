#ifndef MOBILEP_H
#define MOBILEP_H
#include "string"


class mobileP
{
    public:
        mobileP();
        mobileP(string,int,int,int);
        void print()const;
        bool buyukMu(const mobileP &);
        virtual ~mobileP();

    protected:

    private:
        string markaModel;
        int en,boy,kalinlik;
};

#endif // MOBILEP_H
