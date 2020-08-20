#ifndef DATETYPE_H
#define DATETYPE_H


class dateType
{
    public:
        dateType();
        void setDate(int month,int day,int year);
        void getDate(int& month,int day,int& year);
        void printDate()const;
        dateType(int month,int day,int year);
        virtual ~dateType();

    protected:

    private:
        int dMonth;
        int dDay;
        int dYear;
};

#endif // DATETYPE_H
