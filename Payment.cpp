#include "Payment.h"

Payment::Payment()
{
    //ctor
}

Payment::~Payment()
{
    //dtor
}
void Payment::set_data()
{
    string paidDate;
    double amount;
    cout<<"Paid Date : ";
    cin>>paidDate;
    this->paidDate=paidDate;
    cout<<"Amount : ";
    cin>>amount;
    this->amount=amount;
}
string Payment::get_paidate()
{
    return paidDate;
}
/*double Payment::get_pay()
{
    return amount;
}*/
