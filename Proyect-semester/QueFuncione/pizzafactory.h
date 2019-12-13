#ifndef PIZZAFACTORY_H
#define PIZZAFACTORY_H

#include "pizza.h"

class PizzaFactory
{
public:
    PizzaFactory();
    Pizza *getPizza(string, string, int, int, string);
    Pizza *getPizza(string _type, string _size, int _amount);
};

#endif // PIZZAFACTORY_H
