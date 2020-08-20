#include <iostream>
#include "cNumber.h"
using namespace std;



///friend fonksiyonu sinifa ait olmadigi icin sinifin dýþýnda olusturulur
cNumber operator*(const cNumber& rObj,const cNumber& iObj)
{
    cNumber resObj;
    resObj.real=(rObj.real*rObj.real)-(rObj.imaginer*rObj.imaginer);
    resObj.imaginer=(rObj.real*rObj.imaginer)+(rObj.imaginer*rObj.real);


    return resObj;
}
cNumber operator++(cNumber& incObj,int v){
    cNumber rObject=incObj;
    (incObj).real

     return object;
}
///<< operatorune overloading/
ostream& operator<<(ostream& osObject,const cNumber& object)
{

    ///(3,4j) yazmalı
    osObject<<"("<<object.real<<object.imaginer<<"j)";

    return osObject;
}

istream& operator>>(istream& isObject,cNumber& object)
{

    isObject>>object.real>>object.imaginer;

    return isObject;

}


int main()
{

    cNumber cn1(3,4);
    cNumber cn2(3,4);
    cNumber cn3=cn1+cn2;
    cn3.print();
    cNumber cn4=cn1*cn2;
    cn4.print();

}
