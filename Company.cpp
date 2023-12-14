#include "Company.h"

Company::Company()
{
    //ctor
}

Company::~Company()
{
    //dtor
}
 void Company::set_data()
 {
     string location;
     Customer::set_data();
     cout<<"->Location: ";cin>>location;this->location=location;
 }
void Company::display()
        {
            Customer::display();
            cout<<"Location: "<<location<<endl;
        }
string Company::get_location()
        {
            return location;
        }
