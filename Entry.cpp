#include "Entry.h"
#include <string>
#include <sstream> // ostringstream
#include <fstream>
#include <iostream>

using namespace std;

string Entry::NameStr()const
{
    return (name.FirstName()+' '+name.LastName());
}
/*string Entry::TimeStr()const
{
    return (' '+time.Hours()+":"+time.Minutes());
}*/

string Entry::TimeStr() const
{
 string outStr;
 ostringstream tempOut; // ostringstream de acceso
 if (time.Hours() < 10)
 tempOut << '0';
 tempOut << time.Hours() << ":";
 if (time.Minutes() < 10)
 tempOut << '0';
 tempOut << time.Minutes() << ":";
 if (time.Seconds() < 10);
 tempOut << '0';
 tempOut << time.Seconds();
 outStr = tempOut.str();
 return outStr;
}
bool Entry::LessThan(Entry entry)const
{
    return time.LessThan(entry.time);
}
bool Entry::Equal(Entry entry)const
{
    return time.Equal(entry.time);
}
Entry::Entry()
{
}
Entry::Entry(/* in */ string firstName, // Nombre
 /* in */ string middleName, // Apellido paterno
 /* in */ string lastName, // Apellido materno
 /* in */ int initHours, // Horas
 /* in */ int initMinutes, // Minudos
 /* in */ int initSeconds)
 : name(firstName,middleName,lastName),
 time(initHours,initMinutes,initSeconds)
 {
 }
void Entry::ReadEntry(){
    name.ReadName();
    time.ReadTime();
}
