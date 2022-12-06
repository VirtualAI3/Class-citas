#include <iostream>
#include <string>
#include "relType.h"

using namespace std;

class Name{
public:
    Name();
    Name(string firstName,string middleName,string lastName);
    void SetName(string firstName,string middleName,string lastName);
    void ReadName();
    string FirstName()const;
    string LastName()const;
    string MiddleName()const;
    char MiddleInitial()const;
    RelationType ComparedTo(Name otherName)const;
private:
    string first;
    string last;
    string middle;
};
