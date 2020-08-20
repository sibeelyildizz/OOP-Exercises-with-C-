#ifndef PERSONALINFO_H
#define PERSONALINFO_H
#include <string>


class personalInfo
{
    public:
        personalInfo();
        void setpersonalInfo(string first, string last,int month, int day, int year, int ID);
        void printpersonalInfo () const;
        personalInfo(string first, string last,int month, int day, int year, int ID);

        virtual ~personalInfo();

    protected:

    private:
        personType name;
        dateType dDay;
        int personID;
};

#endif // PERSONALINFO_H
