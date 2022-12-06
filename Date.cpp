#include "Date.h"
#include <iostream>

using namespace std;

int DaysInMonth(int,int);

Date::Date()
{
    month=1;
    day=1;
    year=1583;
}
void Date::Set(int newMonth,int newDay,int newYear)
{
    month=newMonth;
    day=newDay;
    year=newYear;
}
int Date::Month()const
{
    return month;
}
int Date::Day()const
{
    return day;
}
int Date::Year()const
{
    return year;
}
RelationType Date::ComparedTo(Date otherDate)const
{
    if (year < otherDate.year) // Comparar años
        return BEFORE;
    if (year > otherDate.year)
        return AFTER;
    if (month < otherDate.month) // Los años son iguales. Comparar
        return BEFORE; // meses
    if (month > otherDate.month)
        return AFTER;
    if (day < otherDate.day) // Los años y meses son iguales.
        return BEFORE; // Comparar días
    if (day > otherDate.day)
        return AFTER;
    else
        return SAME;
}
Date::Date(int newMonth,int newDay,int newYear)
{
    month=newMonth;
    day=newDay;
    year=newYear;
}
