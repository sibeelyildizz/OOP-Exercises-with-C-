#include "clockType.h"

using namespace std;
clockType::clockType()
{
    //ctor   //üye verileri baslaatmak için kullanýlýr
    hour=0;
    minute=0;
    second=0;
}
clockType::clockType(int hour, int minute, int second)
{
    //ctor
    cout << "I am created" << endl;
    hour = hour;
    minute= minute;
    second = second;
}
bool clockType::checkHour(int hour)const{
    if(hour>=0&&hour<=23)
        return true;
    else
        return false;
}
bool clockType::checkMinute(int minute)const{
    if(minute>=0&&minute<60)
        return true;
    else
        return false;
}
bool clockType::checkSecond(int second)const{
    if(second>=0&&second<60)
        return true;
    else
        return false;

}

void clockType::setTime(int hr,int minu,int sec){
    if(checkHour(hr)){
    hour=hr; }
    else
        hour=0;
    if(checkMinute(minu)){
        minute=minu;
    }
    else
        minute=0;
    if(checkSecond(sec)){
        second=sec;
    }
    else
        second=0;


}
void clockType::getTime(int& h,int& m,int& s)const{
    h=hour;
    m=minute;
    s=second;
}
void clockType::printTime(){

  cout << "Time is : " << hour << ":" << minute << ":" << second << endl;

}

void clockType::incrementSecond(){
   if(second < 59){
     second ++;
   } else {
     second = 0;
     incrementMinute();
   }
}void clockType::incrementMinute(){
   if(minute < 59){
     minute ++;
   } else {
     minute = 0;
     incrementHour();
   }
}

void clockType::incrementHour(){
   if(hour < 23){
     hour ++;
   } else {
     hour = 0;
   }
}
void clockType::setTime(timeOfDay tOfD){
   if(tOfD == midDay) {
      setTime(12,0,0);
   }
   if(tOfD == midNight){
      setTime(0,0,0);
   }
}
int clockType::compare(const clockType& otherOclock){

   if(otherOclock.hour == this->hour && otherOclock.minute== this->minute && otherOclock.second == this->second )
     return 1;

   return 0;
}

clockType::~clockType()
{
    //dtor
}
