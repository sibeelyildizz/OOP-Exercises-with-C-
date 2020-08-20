#ifndef OYUNCU_H
#define OYUNCU_H
#include <string>
using namespace std;

class oyuncu
{
    public:
        oyuncu();
        void setParam(string,string);
        void print()const;
        virtual ~oyuncu();

    protected:

    private:
        string ad;
        string takim;
};

#endif // OYUNCU_H
