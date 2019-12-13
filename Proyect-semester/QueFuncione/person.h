#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
public:
    Person();
    Person(string);

    string getName() const;
    void setName(const string &value);

private:
    string name;
};

#endif // PERSON_H
