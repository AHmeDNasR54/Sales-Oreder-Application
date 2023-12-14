#ifndef COMPANY_H
#define COMPANY_H

#include "Customer.h"
#include<iostream>
#include<string>
using namespace std;

class Company : public Customer
{
        private:
          string location;
    public:
        Company();
        void set_data();
        void display();
        string get_location();
        virtual ~Company();

    protected:

};

#endif // COMPANY_H
