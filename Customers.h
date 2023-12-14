#ifndef CUSTOMERS_H
#define CUSTOMERS_H
#include"Customer.h"
#include"Person.h"
#include"Company.h"
#include<iostream>
#include<string>
using namespace std;
class Customers
{
        private:
            Customer** cus;

    public:
                    int numberOfCustomers=0;

        Customer* searchForCustomer(int id);
        void addCustomer();
        void editCustomer();
        void deleteCustomer();
        void display();

        Customers();
        virtual ~Customers();

    protected:

};

#endif // CUSTOMERS_H
