#include "relType.h"
class Date
{
public:
    void Set(int newMonth,int newDay,int newYear);
    int Month()const;
    int Day()const;
    int Year()const;
    RelationType ComparedTo(Date otherDate)const;
    Date();
    Date(int newMonth,int newDay,int newYear);
private:
    int month;
    int day;
    int year;
};
