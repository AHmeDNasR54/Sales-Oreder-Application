#ifndef PAYMENT_H
#define PAYMENT_H
#include<iostream>
#include<string>
using namespace std;
class Payment
{
        private:
    protected:
    string paidDate;
    double amount;
    public:
        Payment();
       virtual void set_data();
        string get_paidate();
        virtual double get_pay()=0;
        virtual ~Payment();


};

#endif // PAYMENT_H
