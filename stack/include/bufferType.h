#ifndef BUFFERTYPE_H
#define BUFFERTYPE_H


class bufferType
{
    public:
        bufferType();
        virtual ~bufferType();
        virtual int readItem()=0;
        virtual int writeItem(int)=0;
        virtual int peekItem(int)=0;


    protected:
        int *buffer;
        int bufSize;
        int writeIndex;
        virtual bool isBufferEmpty()=0;
        virtual bool isBufferFull()=0;


};

#endif // BUFFERTYPE_H
