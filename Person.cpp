#include "Person.h"

Person::Person()
{
    //ctor
}

Person::~Person()
{
    //dtor
}
void Person::set_data()
{
    string billing_addresse;
    Customer::set_data();
    cout<<"Billing addressee : ";cin>>billing_addresse;this->billing_addresse=billing_addresse;
}
void Person::display()
{
    Customer::display();
    cout<<"Billing addressee: "<<billing_addresse<<endl;
}
string Person::get_billing_addresse()
{
    return billing_addresse;
}
