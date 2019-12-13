#ifndef PIZZADELIVERY_H
#define PIZZADELIVERY_H

#include <QObject>
#include <QString>
#include <QStringList>

#include <iostream>
using namespace std;

class PizzaDelivery : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(QString size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(QString amount READ amount WRITE setAmount NOTIFY amountChanged)
    Q_PROPERTY(QString dbname READ dbname WRITE setDbname NOTIFY dbnameChanged)
    Q_PROPERTY(QString custname READ custname WRITE setCustname NOTIFY custnameChanged)
    Q_PROPERTY(QString custaddress READ custaddress WRITE setCustaddress NOTIFY custaddressChanged)
    Q_PROPERTY(QString toppings READ toppings WRITE setToppings NOTIFY toppingsChanged)
    Q_PROPERTY(QStringList types READ types NOTIFY typesChanged)
public:
    PizzaDelivery();
    ~PizzaDelivery();

    QString type();
    void setType(const QString &t);

    QString size();
    void setSize(const QString &s);

    QString amount();
    void setAmount(const QString &a);

    QString dbname();
    void setDbname(const QString &dbn);

    QString custname();
    void setCustname(const QString &cn);

    QString custaddress();
    void setCustaddress(const QString &ca);

    QStringList types();

    QString toppings();
    void setToppings(const QString &to);

public slots:
    void generateOrder();

signals:
    void typeChanged();
    void sizeChanged();
    void amountChanged();
    void dbnameChanged();
    void custnameChanged();
    void custaddressChanged();
    void toppingsChanged();
    void typesChanged();
    void orderGenerated(bool success, int totalPrice, QString info, QString tops);

private:
    QString _type;
    QStringList _types;
    QString _size;
    QString _amount;
    QString _dbname;
    QString _custname;
    QString _custaddress;
    QString _toppings;
};

#endif // PIZZADELIVERY_H
