#ifndef PERSON_H
#define PERSON_H

#include "Customer.h"
#include<iostream>
#include<string>
using namespace std;


class Person : public Customer
{
        private:
      string billing_addresse;
    public:
        Person();
        void set_data();
        void display();
        string get_billing_addresse();
        virtual ~Person();

    protected:

};

#endif // PERSON_H
