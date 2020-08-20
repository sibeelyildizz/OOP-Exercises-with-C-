#include "cNumber.h"
#include <iostream>

using namespace std;



cNumber::cNumber(double r,double i)
{
    real=r;
    imaginer=i;

}
cNumber cNumber::operator+(const cNumber& number)const{
   cNumber temp;
   temp.real=real+number.real;
   temp.imaginer=imaginer+number.imaginer;
   return temp;

}
cNumber cNumber::operator+()

void  cNumber:: print()
{
     cout << real << " + i" << imaginer << endl;
}
cNumber::~cNumber()
{
    //dtor
}
