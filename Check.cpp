#include "Check.h"

Check::Check()
{
    //ctor
}

Check::~Check()
{
    //dtor
}
        void Check::set_data()
        {
            Payment::set_data();
            string name,BankId;
            cout<<"Name: ";cin>>name;this->name=name;
            cout<<"Bank ID: ";cin>>BankId;this->BankId=BankId;
        }
string Check::get_name()
{
    return name;

}
string Check::get_BankID()
{
    return BankId;
}
double Check::get_pay()
{
    return amount;
}
