#include "Time.h"
#include <iostream>

using namespace std;

void Time::Set(int hours,int minutes,int seconds){
hrs=hours;
mins=minutes;
secs=seconds;
}
void Time::Increment(){
secs++;
if (secs>59){
    secs=0;
    mins++;
    if (mins>59){
        mins=0;
        hrs++;
        if (hrs>23){
            hrs=0;
        }
    }
}
}
void Time::Write()const{
if (hrs<10)
    cout<<'0';
cout<<hrs<<':';
if (mins<10)
    cout<<'0';
cout<<mins<<':';
if (secs<10)
    cout<<'0';
cout<<secs;
}
bool Time::Equal(Time otherTime)const{
return (hrs == otherTime.hrs && mins == otherTime.mins &&
 secs == otherTime.secs);
}
bool Time::LessThan(Time otherTime)const{
return (hrs < otherTime.hrs ||
 hrs == otherTime.hrs && mins < otherTime.mins ||
 hrs == otherTime.hrs && mins == otherTime.mins
 && secs < otherTime.secs);
}
Time::Time( /* in */ int initHrs,
 /* in */ int initMins,
 /* in */ int initSecs )
{
 hrs = initHrs;
 mins = initMins;
 secs = initSecs;
}
Time::Time(){
hrs=0;
mins=0;
secs=0;
}
int Time::Hours()const
{
    return hrs;
}
int Time::Minutes()const
{
    return mins;
}
int Time::Seconds()const
{
    return secs;
}
void Time::ReadTime()
{
    cout << "Enter hours (<= 23): " << endl;
 cin >> hrs;
 cout << "Enter minutes (<= 59): " << endl;
 cin >> mins;
 cout << "Enter seconds (<= 59): " << endl;
 cin >> secs;
}
