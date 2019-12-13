#include "pizza.h"

Pizza::Pizza()
{

}

Pizza::Pizza(string _size, int _amount, int _price, string _toppings)
{
    setSize(_size);
    setAmount(_amount);
    setPrice(_price);
    setToppings(_toppings);
}

string Pizza::getSize() const
{
    return size;
}

void Pizza::setSize(const string &value)
{
    size = value;
}

int Pizza::getAmount() const
{
    return amount;
}

void Pizza::setAmount(int value)
{
    amount = value;
}

int Pizza::getPrice() const
{
    return price;
}

void Pizza::setPrice(int value)
{
    price = value;
}

string Pizza::getToppings() const
{
    return toppings;
}

void Pizza::setToppings(const string &value)
{
    toppings = value;
}
