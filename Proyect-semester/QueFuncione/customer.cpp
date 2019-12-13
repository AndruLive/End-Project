#include "customer.h"

Customer::Customer()
{

}

Customer::Customer(string _name, string _address)
{
    setName(_name);
    setAddress(_address);
}

string Customer::getAddress() const
{
    return address;
}

void Customer::setAddress(const string &value)
{
    address = value;
}
