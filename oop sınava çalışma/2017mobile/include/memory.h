#ifndef MEMORY_H
#define MEMORY_H
#include "string.h"


class memory
{
    public:
         memory();
         memory(string,int);
        virtual ~memory();
        int getCapacity()const;
        void print() const;

    protected:

    private:
        string memType;
        int kapasite;

#endif // MEMORY_H
