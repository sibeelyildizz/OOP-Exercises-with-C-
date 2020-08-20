#ifndef DORTGEN_H
#define DORTGEN_H


class Dortgen
{
    public:
        Dortgen();

        virtual double alanHesapla();

        virtual ~Dortgen();

    protected:

    private:
        int taban;
        int yukseklik;

};

#endif // DORTGEN_H
