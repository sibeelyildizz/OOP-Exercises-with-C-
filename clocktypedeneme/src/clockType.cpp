
#include "clockType.h"
#include <iostream>

using namespace std;

clockType::clockType()
{
    //ctor
}
void clockType::setTime(int hours,int minutes,int seconds)
{
    if(0<=hours && hours<24)
        hr=hours;
    else
        hr=0;
    if(0<=minutes && minutes<60)
        minn=minutes;
    else
        minn=0;
    if(0<seconds && seconds<60)
        sec=seconds;
    else
        sec=0;
}
void clockType::printTime()const
{
    if(hr<10)
        cout<<"0";
    cout<<hr<<":";
    if(minn<10)
        cout<<"0";
    cout<<minn<<":";
    if(sec<10)
        cout<<"0";
    cout<<sec;
}
void clockType::getTime(int& hours,int& minutes,int& seconds)
{
    hours=hr;
    minutes=minn;
    seconds=sec;
}
void clockType::incremenetHours(){
    hr++;
    if(hr>23)
        hr=0;
}
void clockType::incrementMinutes(){
    minn++;
    if(minn>59){
        minn=0;
        incremenetHours();
    }
}
void clockType::incrementSeconds(){
    sec++;
    if(sec>59){
        sec;
        incrementMinutes();
    }
}
bool clockType::equalTime(const clockType& otherClock)const{
    return (hr == otherClock.hr && minn == otherClock.minn && sec == otherClock.sec);

}
clockType::~clockType()
{
    //dtor
}
