#ifndef OPOVERCLASS_H
#define OPOVERCLASS_H


class opOverClass
{
    public:
        opOverClass(int i=0,int j=0);

        void print()const;

        opOverClass operator+(const opOverClass& right)const;

        virtual ~opOverClass();

    protected:

    private:
        int a,b;
};

#endif // OPOVERCLASS_H
