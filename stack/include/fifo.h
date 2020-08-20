#ifndef FIFO_H
#define FIFO_H

#include <bufferType.h>


class fifo : public bufferType
{
    public:
        fifo();
        virtual ~fifo();
        virtual int readItem();
        virtual int writeItem(int);
        virtual int peekItem(int);

    protected:
        virtual bool isBufferEmpty();
        virtual bool isBufferFull();

    private:
        int readIndex;
};

#endif // FIFO_H
