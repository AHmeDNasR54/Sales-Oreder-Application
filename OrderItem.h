#ifndef ORDERITEM_H
#define ORDERITEM_H
#include"Product.h"
#include"Stock.h"
#include<iostream>
#include<string>
using namespace std;

class OrderItem
{
        private:
            int id;// i will assign it with product id to use it
          //  Product *pro;
            double quantity;
            double price;
    public:
                    Stock *stock;

        OrderItem();
        void set_data();
        double get_quantity();
        double get_price();
        void display();
        int get_id()
        {
            return id;
        }
        virtual ~OrderItem();

    protected:

};

#endif // ORDERITEM_H
