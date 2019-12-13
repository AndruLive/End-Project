#include "pepperonipizza.h"

PepperoniPizza::PepperoniPizza()
{

}

PepperoniPizza::PepperoniPizza(string _size, int _amount, int _price, string _toppings)
{
    setSize(_size);
    setAmount(_amount);
    setPrice(_price);
    setToppings(_toppings);
}


