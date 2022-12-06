#include "Entry.h"

typedef Entry ItemType;
class SortedList
{
public:
    bool IsEmpty()const;
    bool IsFull()const;
    int Length()const;
    void Insert(ItemType& item);
    void Delete(ItemType item);
    bool IsPresent(ItemType item)const;
    void Reset();
    ItemType GetNextItem();
    SortedList();
    SortedList(int numElements);
private:
    int length;
    int currentPos;
    int size;
    ItemType* data;
    void BinSearch(ItemType,bool&,int&)const;
};
