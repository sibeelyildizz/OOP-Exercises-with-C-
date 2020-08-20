#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H
#include <string>
#include <iostream>

using namespace std;


class clockType
{
    public:
        enum timeOfDay{midDay, midNight};
        clockType();
        clockType(int hour, int minute, int second);
        void setTime(int hour,int minute,int second);
        void getTime(int& hour,int& minute,int& second)const;  //dýþardan alacaðý için  int&
      //  string  getTime();
        void printTime();
        void incrementHour();
        void incrementMinute();
        void incrementSecond();
        int compare(const clockType& otherClock); //kendisiyle diðer nesneyi karþýlaþtýrdýðý için tek paraemtre
        void setTime(timeOfDay tOfD);

        virtual ~clockType();

    protected:

    private:
        int hour,minute,second;
        bool checkHour(int hour)const;
        bool checkMinute(int minute)const;
        bool checkSecond(int second)const;
         timeOfDay tD;
};

#endif // CLOCKTYPE_H
