#ifndef CHECK_H
#define CHECK_H

#include <Payment.h>

#include<iostream>
#include<string>
using namespace std;
class Check : public Payment
{
        private:
            string name;
            string BankId;

    public:
        Check();
        void set_data();
        string get_name();
        string get_BankID();
        double get_pay();
        virtual ~Check();

    protected:

};

#endif // CHECK_H
