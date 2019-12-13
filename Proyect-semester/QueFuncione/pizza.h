#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
using namespace std;

class Pizza
{
public:
    Pizza();
    Pizza(string, int, int, string);

    string getSize() const;
    void setSize(const string &value);

    int getAmount() const;
    void setAmount(int value);

    int getPrice() const;
    void setPrice(int value);

    string getToppings() const;
    void setToppings(const string &value);

private:
    string size;
    int amount;
    int price;
    string toppings;
};

#endif // PIZZA_H
