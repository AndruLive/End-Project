#ifndef ORDER_H
#define ORDER_H

#include "customer.h"
#include "deliveryboy.h"
#include "pizza.h"
#include "pizzafactory.h"
#include "cheesepizza.h"
#include "pepperonipizza.h"

class Order
{
public:
    Order();
    Order(Pizza *, Customer, DeliveryBoy);

    Pizza *getPizza();
    void setPizza(Pizza *value);

    Customer getCust();
    void setCust(const Customer &value);

    DeliveryBoy getDelBoy();
    void setDelBoy(const DeliveryBoy &value);

private:
    Pizza *pizza;
    Customer cust;
    DeliveryBoy delBoy;
};
#endif // ORDER_H
