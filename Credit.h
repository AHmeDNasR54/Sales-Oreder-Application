#ifndef CREDIT_H
#define CREDIT_H

#include <Payment.h>
#include<iostream>
#include<string>
using namespace std;

class Credit : public Payment
{
        private:
        string number;
        string expireDate;
        string type;
    public:
        Credit();
        void set_data();
        string get_number();
        string get_expireDate();
        string get_type();
        double get_pay();
        virtual ~Credit();

    protected:

};

#endif // CREDIT_H
