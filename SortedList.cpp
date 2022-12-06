#include "SortedList.h"
SortedList::SortedList()
{
    length=0;
    size=20;
    data=new ItemType[size];
}
SortedList::SortedList(int numElements)
{
    length=0;
    size=numElements;
    data=new ItemType[numElements];
}
bool SortedList::IsFull()const
{
    return (length==size);
}
void SortedList::Insert(ItemType& item)
{
    int index;
    index=length-1;
    while (index>=0&&item.LessThan(data[index]))
    {
        data[index+1]=data[index];
        index--;
    }
    data[index+1]=item;
    length++;
}
void SortedList::BinSearch(ItemType item,bool& found,int& position)const
{
    int first=0;
    int last=length-1;
    int middle;
    found=false;
    while (last>=first&&!found)
    {
        middle=(first+last)/2;
        if (item.LessThan(data[middle]))
            last=middle-1;
        else if (data[middle].LessThan(item))
            first=middle+1;
        else
            found=true;
    }
    if (found)
        position=middle;
}
int SortedList::Length()const
{
    return length;
}
void SortedList::Reset()
{
    currentPos=0;
}
ItemType SortedList::GetNextItem()
{
 ItemType item;
 item = data[currentPos];
 if (currentPos == length -1)
    currentPos = 0;
 else
    currentPos++;
 return item;
}
bool SortedList::IsPresent( /* in */ ItemType item ) const
{
 bool found; // Verdadero si se halló el elemento
 int position; // Argumento requerido (pero no empleado) para
 // la llamada a BinSearch
 BinSearch(item, found, position);
 return found;
}
void SortedList::Delete( /* in */ ItemType item )
{
 bool found; // Verdadero si se halla el elemento
 int position; // Posición del elemento si se halla
 int index; // Índice y variable de control de ciclo
 BinSearch(item, found, position);
 if (found)
 {
 // Desplazar data[position..Length – 1] una posición hacia arriba
 for (index = position; index < length - 1; index++)
 data[index] = data[index+1];
 length--;
 }
}
