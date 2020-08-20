#include "dateType.h"
#include <iostream>

using namespace std;
dateType::dateType()
{
    //ctor
}

void dateType::setDate(int month,int day,int year){
    dMonth=month;
    dDay=day;
    dYear=year;

}
void dateType::getDate(int& month,int day,int& year){
    month = dMonth;
	day = dDay;
	year = dYear;
}
void dateType::printDate()const {
    cout<<dMonth<<"."<<dDay<<"."<<dYear<<endl;

}

dateType::~dateType()
{
    //dtor
}
