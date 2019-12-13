#include "cheesepizza.h"

CheesePizza::CheesePizza()
{

}

CheesePizza::CheesePizza(string _size, int _amount, int _price, string _toppings)
{
    setSize(_size);
    setAmount(_amount);
    setPrice(_price);
    setToppings(_toppings);
}


