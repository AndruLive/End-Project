#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "person.h"

class Customer : public Person
{
public:
    Customer();
    Customer(string, string);

    string getAddress() const;
    void setAddress(const string &value);

private:
    string address;
};

#endif // CUSTOMER_H
