#include "Product.h"

Product::Product()
{
    //ctor
}

Product::~Product()
{
    //dtor
}
void Product::set_data()
{
    string name,number;
    int id,type;
    double price;
    cout<<"->Name: ";cin>>name;this->name=name;
    cout<<"->Number: ";cin>>number;this->number=number;
    cout<<"->ID: ";cin>>id;this->id=id;
    cout<<"->Type: ";cin>>type;this->type=type;
    cout<<"->Price: ";cin>>price;this->price=price;
}
void Product::display()
{
     cout<<"->Name: "<<name<<endl;
    cout<<"->Number: "<<number<<endl;
    cout<<"->ID: "<<id<<endl;
    cout<<"->Type: "<<type<<endl;
    cout<<"->Price: "<<price<<endl;

}
void Product::updateProductInformation()
{
      string name,number;
    int id,type;
    double price;
    display();
    cout<<"------------------\n";
    cout<<"Do you want to update specific feature..?\n(1-Name/2-Number/3-ID/4-Type/5-Price/6-All features..?)\nchoose (1-6)..";
    int choice;cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"the previous name is "<<name<<endl;
        cout<<"Enter the new name : ";cin>>name;this->name=name;
        cout<<"DONE !\n";
        break;

    case 2:
        cout<<"the previous number is "<<number<<endl;
        cout<<"Enter the new number : ";cin>>number;this->number=number;
        cout<<"DONE !\n";
        break;
    case 3:
        cout<<"the previous ID is "<<id<<endl;
        cout<<"Enter the new ID : ";cin>>id;this->id=id;
        cout<<"DONE !\n";
        break;
    case 4:
        cout<<"the previous type is "<<type<<endl;
        cout<<"Enter the new type : ";cin>>type;this->type=type;
        cout<<"DONE !\n";
        break;
    case 5:
        cout<<"the previous price is "<<price<<endl;
        cout<<"Enter the new price : ";cin>>price;this->price=price;
        cout<<"DONE !\n";
        break;
    case 6:
        set_data();
        cout<<"UPDATED SUCCESSFULLY !\n";

    }
}
string Product::get_name()
{
    return name;
}
string Product::get_number()
{
    return number;
}
int Product::get_id()
{
    return this->id;
}
int Product::get_type()
{
    return type;
}
double Product::get_price()
{
    return price;
}
void Product::testSetData(string name,string number,int id,int type,double price)
{
    this->name=name;
     this->number=number;
     this->id=id;
     this->type=type;
     this->price=price;


}
