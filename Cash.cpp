#include "Cash.h"

Cash::Cash()
{
    //ctor
}

Cash::~Cash()
{
    //dtor
}
void Cash::set_data()
{
    Payment::set_data();
    double cashValue;
    cout<<"Cash value: ";cin>>cashValue;this->cashValue=cashValue;

}
double Cash::get_cashValue()
{
  return cashValue;
}
double Cash::get_pay()
{
    return amount;
}
