#ifndef POINTERDATACLASS_H
#define POINTERDATACLASS_H


class pointerDataClass
{
    public:
        pointerDataClass();
        void print() const;
        void setData();
        pointerDataClass(int sizeP=10);

        pointerDataClass(const pointerDataClass& otherObject); //copy constructor
        virtual ~pointerDataClass();

    protected:

    private:
        int x;
        int lenP;
        int *p;
};

#endif // POINTERDATACLASS_H
