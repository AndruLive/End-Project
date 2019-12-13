#include "pizzafactory.h"
#include "cheesepizza.h"
#include "pepperonipizza.h"

PizzaFactory::PizzaFactory()
{

}

Pizza *PizzaFactory::getPizza(string _type, string _size, int _amount, int _price, string _toppings)
{
    Pizza *pizza = nullptr;

    if(_type == "Cheese"){
        pizza = new CheesePizza(_size + "Cheese Pizza", _amount, _price, _toppings);
    }else if (_type == "Pepperoni"){
        pizza = new PepperoniPizza(_size + "Pepperoni Pizza", _amount, _price, _toppings);
    }
    return pizza;
}

Pizza *PizzaFactory::getPizza(string _type, string _size, int _amount)
{
    Pizza *pizza = nullptr;

    if(_type == "Cheese"){
        if(_size == "Small"){
            pizza = new CheesePizza(_size + "Cheese", _amount, 10, "tomato sauce, mozzarella");
        }
        if(_size == "Medium"){
            pizza = new CheesePizza(_size + "Cheese", _amount, 15, "tomato sauce, mozzarella");
        }
        if(_size == "Big"){
            pizza = new CheesePizza(_size + "Cheese", _amount, 18, "tomato sauce, mozzarella");
        }

    }if (_type == "Pepperoni"){
        if(_size == "Small"){
            pizza = new PepperoniPizza(_size + "Pepperoni", _amount, 12, "artichoke, sweet corn");
        }
        if(_size == "Medium"){
            pizza = new PepperoniPizza(_size + "Pepperoni", _amount, 17, "artichoke, sweet corn");
        }
        if(_size == "Big"){
            pizza = new PepperoniPizza(_size + "Pepperoni", _amount, 21, "artichoke, sweet corn");
        }
    }
    return pizza;
}

