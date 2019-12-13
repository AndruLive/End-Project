#include "person.h"

Person::Person()
{

}

Person::Person(string _name)
{
    setName(_name);
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &value)
{
    name = value;
}
