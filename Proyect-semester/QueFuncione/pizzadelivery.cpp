#include "pizzadelivery.h"
#include "pizza.h"
#include "cheesepizza.h"
#include "pepperonipizza.h"
#include "pizzafactory.h"
#include "deliveryboy.h"
#include "customer.h"
#include "order.h"

PizzaDelivery::PizzaDelivery()
    : _type("Pepperoni"), _types{"Cheese", "Pepperoni"}
{
}

PizzaDelivery::~PizzaDelivery()
{
}

QString PizzaDelivery::type()
{
    return _type;
}

void PizzaDelivery::setType(const QString &t)
{
    // Check for valid type.
    if (!_types.contains(t))
        return;

    if (t != _type) {
        _type = t;
        emit typeChanged();
    }
}

QString PizzaDelivery::amount()
{
    return _amount;
}

void PizzaDelivery::setAmount(const QString &a)
{
    _amount = a;
    emit amountChanged();
}

QString PizzaDelivery::size()
{
    return _size;
}

void PizzaDelivery::setSize(const QString &s)
{
    _size = s;
    emit sizeChanged();
}

QString PizzaDelivery::dbname()
{
    return _dbname;
}

void PizzaDelivery::setDbname(const QString &dbn)
{
    _dbname = dbn;
    emit dbnameChanged();
}

QString PizzaDelivery::custname()
{
    return _custname;
}

void PizzaDelivery::setCustname(const QString &cn)
{
    _custname = cn;
    emit custnameChanged();
}

QString PizzaDelivery::custaddress()
{
    return _custaddress;
}

void PizzaDelivery::setCustaddress(const QString &ca)
{
    _custaddress = ca;
    emit custaddressChanged();
}

QString PizzaDelivery::toppings()
{
    return _toppings;
}

void PizzaDelivery::setToppings(const QString &to)
{
    _toppings = to;
}

QStringList PizzaDelivery::types()
{
    return _types;
}

void PizzaDelivery::generateOrder()
{
    if (_type.isEmpty() or _size.isEmpty() or _amount.isEmpty()  or _dbname.isEmpty() or _custname.isEmpty() or _custaddress.isEmpty()    ) {
        emit orderGenerated(false, 0, QString::fromStdString(""), QString::fromStdString(""));
        return;
    }
    PizzaFactory pf = PizzaFactory();
    Pizza *pizza = pf.getPizza(_type.toStdString(), _size.toStdString(), _amount.toInt());
    Customer cust = Customer();
    cust.setName(_custname.toStdString());
    cust.setAddress(_custaddress.toStdString());
    DeliveryBoy db = DeliveryBoy();
    db.setName(_dbname.toStdString());
    Order ord = Order(pizza, cust, db);
    int totalPrice = ord.getPizza()->getPrice() * ord.getPizza()->getAmount();
    emit orderGenerated(true, totalPrice, "(" + QString::number(ord.getPizza()->getAmount()) + ") " + QString::fromStdString(ord.getPizza()->getSize()) + ", to: " + QString::fromStdString(ord.getCust().getName()) + ", dBoy: " + QString::fromStdString(ord.getDelBoy().getName()), QString::fromStdString(ord.getPizza()->getToppings()));
}
