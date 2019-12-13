#include "order.h"

Order::Order()
{

}

Order::Order(Pizza *_pi, Customer _cust, DeliveryBoy _delboy)
{
    setPizza(_pi);
    setCust(_cust);
    setDelBoy(_delboy);
}

Pizza *Order::getPizza()
{
    return pizza;
}

void Order::setPizza(Pizza *value)
{
    pizza = value;
}

Customer Order::getCust()
{
    return cust;
}

void Order::setCust(const Customer &value)
{
    cust = value;
}

DeliveryBoy Order::getDelBoy()
{
    return delBoy;
}

void Order::setDelBoy(const DeliveryBoy &value)
{
    delBoy = value;
}


