#include "OrderItem.h"

OrderItem::OrderItem()
{
    //pro=new Product[100];
    stock=nullptr;
}

OrderItem::~OrderItem()
{
   // delete [] pro;
}
void OrderItem::set_data()
{
    if(stock!=nullptr)
    {

    int id;
    cout<<"Product ID: ";cin>>id;
       if(stock->checkIDforProduct(id))
    {
        this->id=id;
    double quantity;
    cout<<"Quantity: ";cin>>quantity;this->quantity=quantity;
    if(quantity<=stock->quantity[stock->getIndexOfProduct(id)])
    {
    stock->quantity[stock->getIndexOfProduct(id)]-=quantity;
    price=stock->pro[stock->getIndexOfProduct(id)].get_price()*quantity;
    }
    else
    {
            cout<<"Sorry there are only "<<stock->quantity[stock->getIndexOfProduct(id)]<<" available"<<endl;
        cout<<"Do you want to get this these quantity (y/n)..?";
        char choice;cin>>choice;
        if(choice=='y'||choice=='Y')
        {
            cout<<"Done..\n";
            price=stock->pro[stock->getIndexOfProduct(id)].get_price()*quantity;
        stock->quantity[stock->getIndexOfProduct(id)]-=quantity;
        }
        else return;
    }


    }
    else cout<<"there is no product has this ID\n";
    }
    else cout<<"Sorry we can't make order because Stock is empty\n";

}
double OrderItem::get_quantity()
{
    return quantity;
}
double OrderItem::get_price()
{
    return price;
}
void OrderItem::display()
{
    cout<<stock->pro[stock->getIndexOfProduct(id)].get_name()<<"|"<<quantity<<"|"<<price<<endl;
}
