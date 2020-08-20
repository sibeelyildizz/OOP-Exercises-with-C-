#include "opOverClass.h"
#include <iostream>

using namespace std;

opOverClass::opOverClass(int i,int j)
{
    a=i;
    b=j;
}
void opOverClass::print()const{
 cout<<"("<<a<<", "<<b<<")";

}
opOverClass opOverClass::operator+(const opOverClass& right)const{
    opOverClass temp;
    temp.a=a+right.a;
    temp.b=b+right.b;

    return temp;
}
opOverClass::~opOverClass()
{
    //dtor
}
