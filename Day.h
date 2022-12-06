#include "SortedList.h"
#include "Date.h"
#include "relType.h"

class Day
{
public:
    Day();
    Day(Date newDate,int numAppts);
    Day(Date newDate,Entry newEntry,int numAppts);
    void InsertEntry(Entry newEntry);
    void Delete(Entry entry);
    Date DateIs()const;
    RelationType ComparedTo(Day otherDay)const;
    int NumberOfEntries();
    void ResetEntries();
    Entry GetNextItem();
    bool TimeFree(Time time);
private:
    Date date;
    SortedList list;
};
