#include "pointerDataClass.h"

pointerDataClass::pointerDataClass()
{
    //ctor
}
pointerDataClass::pointerDataClass(const pointerDataClass& otherObject) //copy constructor
{
    //deep copy
    lenP=otherObject.lenP;
    p=new int[lenP];
    for(int i=0;i<lenP;i++){
        p[i]=otherObject.p[i];
    }

    //ctor
}
pointerDataClass::~pointerDataClass()
{
    //dtor
}
