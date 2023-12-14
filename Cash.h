#ifndef CASH_H
#define CASH_H

#include <Payment.h>
#include<iostream>
#include<string>
using namespace std;

class Cash : public Payment
{
        private:
         double cashValue;
    public:
        Cash();
        void set_data();
        double get_cashValue();
        double get_pay();
        virtual ~Cash();

    protected:

};

#endif // CASH_H
