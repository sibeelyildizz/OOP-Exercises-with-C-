#include "memory.h"

memory::memory()
{
    //ctor
}
memory::memory(string m,int k)
{
    memType=m;
    kapasite=k;
}
int memory::getCapacity()const{
    return kapasite;
}
void memory::print()const{
    cout<<memType<<endl<<kapasite<<endl;
}
memory::~memory()
{
    //dtor
}
