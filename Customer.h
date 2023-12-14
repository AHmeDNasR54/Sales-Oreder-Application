#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<string>

using namespace std;

class Customer
{
protected:
    string name;
    string phone;
    int id;
    int numberOfOrder;
    public:
        int test;
        virtual void set_data();
        virtual void display();
        string get_name();
        string get_phone();
        int get_id();
       // void addOrder();
        Customer();
        virtual ~Customer();


};

#endif // CUSTOMER_H
