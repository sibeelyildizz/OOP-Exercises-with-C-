#ifndef NEWSTRING_H
#define NEWSTRING_H
#include <iostream>

using namespace std;


class newString
{
       friend ostream& operator<<(ostream&,const newString&);
        friend istream& operator>>(istream&,newString&);
    public:
        newString(const char *);
        newString();
        newString(const newString&);
        char &operator[](int);
        const char &operator[](int)const;


        virtual ~newString();

    protected:

    private:

         char *strPtr;
         int strLength;
};

#endif // NEWSTRING_H
