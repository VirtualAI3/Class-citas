#include "Day.h"
void Day::InsertEntry(Entry newEntry)
{
    list.Insert(newEntry);
}
Day::Day():list(24)
{

}
Day::Day(Date newDate,int numAppts):list(numAppts)
{
    date=newDate;
}
Day::Day(Date newDate,Entry newEntry,int numAppts):list(numAppts)
{
    list.Insert(newEntry);
    date=newDate;
}
void Day::Delete(Entry entry)
{
    list.Delete(entry);
}
Date Day::DateIs()const
{
    return date;
}
RelationType Day::ComparedTo(Day otherDay)const
{
    return date.ComparedTo(otherDay.date);
}
int Day::NumberOfEntries()
{
    return list.Length();
}
void Day::ResetEntries()
{
    list.Reset();
}
Entry Day::GetNextItem()
{
    return list.GetNextItem();
}
bool Day::TimeFree(Time time)
{
    Entry entry(" "," "," ",time.Hours(),time.Minutes(),time.Seconds());
    return !(list.IsPresent(entry));
}
