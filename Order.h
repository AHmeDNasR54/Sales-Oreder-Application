#ifndef ORDER_H
#define ORDER_H
#include"Customer.h"
#include"OrderItem.h"
#include<iostream>
#include<string>
#include"Customer.h"

using namespace std;
class Order
{
    double total;
    string date;
    int ID;
    int number;
public:
    Customer* cus;
    OrderItem*order;
    int numberOfOrderItem=0;
    double checkPaymentBefor;//=-1 if this order is paid before this value will be the last value
    void set_data();
    int getID();
    int getNumber();
    string getDate();
    double getTotal();
   double CalculateTotal();
    void addItem();
    void display();
    Order();
    virtual ~Order();

protected:

private:
};

#endif // ORDER_H
