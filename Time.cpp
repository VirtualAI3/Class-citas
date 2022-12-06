#include "Time.h"
#include <iostream>

using namespace std;

void Time::Set(int hours,int minutes){
hrs=hours;
mins=minutes;
}
bool Time::Equal(Time otherTime)const{
return (hrs==otherTime.hrs && mins==otherTime.mins);
}
bool Time::LessThan(Time otherTime)const{
return ((hrs < otherTime.hrs)||
 (hrs==otherTime.hrs&&mins < otherTime.mins));
}
Time::Time( /* in */ int initHrs,
 /* in */ int initMins)
{
 hrs = initHrs;
 mins = initMins;
}
Time::Time(){
hrs=0;
mins=0;

}
int Time::Hours()const
{
    return hrs;
}
int Time::Minutes()const
{
    return mins;
}

void Time::ReadTime()
{
cout << "Enter hours (<= 23): " << endl;
 cin >> hrs;
 cout << "Enter minutes (<= 59): " << endl;
 cin >> mins;
}
