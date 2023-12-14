#include "Credit.h"

Credit::Credit()
{
    //ctor
}

Credit::~Credit()
{
    //dtor
}
void Credit::set_data()
{
     string number;
        string expireDate;
        string type;
    Payment::set_data();
    cout<<"Number: ";cin>>number;this->number=number;
    cout<<"Expire Date: ";cin>>expireDate;this->expireDate=expireDate;
    cout<<"Type: ";cin>>type;this->type=type;
}
string Credit::get_number()
{
    return number;
}
string Credit::get_expireDate()
{
    return expireDate;

}
string Credit::get_type()
{
    return type;
}
double Credit::get_pay()
{
    return amount;
}
