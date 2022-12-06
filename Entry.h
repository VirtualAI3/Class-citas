#include "Time.h"
#include "Name.h"
#include <string>

class Entry{
public:
    string NameStr()const;
    string TimeStr()const;
    Entry();
    Entry(/* in */ string firstName, // Nombre
 /* in */ string middleName, // Apellido paterno
 /* in */ string lastName, // Apellido materno
 /* in */ int initHours, // Horas
 /* in */ int initMinutes, // Minudos
 /* in */ int initSeconds);
    bool LessThan(Entry entry)const;
    bool Equal(Entry entry)const;
    void ReadEntry();
private:
    Name name;
    Time time;
};
