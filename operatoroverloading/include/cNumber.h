#ifndef CNUMBER_H
#define CNUMBER_H
#include <iostream>

using namespace std;

class cNumber
{

  friend cNumber operator*(const cNumber&,const cNumber&);
  friend ostream& operator<<(ostream&,const cNumber&);
  friend istream& operator>>(istream&, cNumber&);

  friend cNumber operator++(cNumber& incObj,int v);


    public:

        cNumber(double=0,double=0);
        cNumber operator+(const cNumber&)const;

         void print();
        virtual ~cNumber();

    protected:

    private:
        double real,imaginer;
};

#endif // CNUMBER_H
