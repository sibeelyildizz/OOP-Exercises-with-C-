#include <iostream>
#include "clockType.h"
using namespace std;

int main()
{
    clockType myClock;
    clockType yourClock;

    int hours;
    int minutes;
    int seconds;

    myClock.setTime(5,4,30);
    cout<<"line1:myClock:";
    myClock.printTime();
    cout<<endl;

    yourClock.setTime(5,45,16);
    cout<<"line2:yourClock:";
    yourClock.printTime();
    cout<<endl;

    if(myClock.equalTime(yourClock))
        cout<<"line3:esitler"<<endl;

    else
        cout<<"line4:esit degiller"<<endl;

    cout<<"line5:enter hours,minutes,seconds"<<endl;


    cin>>hours>>minutes>>seconds;
    cout<<endl;

    myClock.setTime(hours,minutes,seconds);
    myClock.printTime();
    cout<<endl;

    myClock.incremenetHours();
    cout<<"line6:after incrementing the clock by "<<"one second,myclock:"<<endl;
    myClock.printTime();
    cout<<endl;






    return 0;
}
