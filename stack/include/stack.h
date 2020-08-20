#ifndef STACK_H
#define STACK_H

#include <bufferType.h>


class stack : public bufferType
{
    public:
        stack();
        virtual ~stack();
        virtual int readItem();
        virtual int writeItem(int);
        virtual int peekItem(int)=0;


    protected:

    private:
};

#endif // STACK_H
