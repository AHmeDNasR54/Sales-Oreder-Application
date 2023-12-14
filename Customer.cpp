#include "Customer.h"

Customer::Customer()
{
numberOfOrder=0;
}

Customer::~Customer()
{
    //delete []order;
}
void Customer::set_data()
{
    string name,phone;int id;
    cout<<"Please fill this sheet..\n";
    cout<<"->Name: ";cin>>name;this->name=name;
    cout<<"->Phone: ";cin>>phone;this->phone=phone;
    cout<<"->ID: ";cin>>id;this->id=id;
}
string Customer::get_name()
{
    return name;
}
string Customer::get_phone()
{
    return phone;
}
int Customer::get_id()
{
    return id;
}
void Customer::display()
{
    cout<<"Name: "<<name
    <<"\nPhone: "<<phone
    <<"\nID: "<<id<<endl;
}
/*void Customer::addOrder()
{
    order[numberOfOrder].set_data();
    char choice='y';
    while(choice=='y'||choice=='Y')
    {
            order[numberOfOrder].addItem();
     cout<<"Another item?..(y\n)?..";cin>>choice;

    }
    numberOfOrder++;
}*/

