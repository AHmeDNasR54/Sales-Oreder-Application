#include "Order.h"

Order::Order()
{
    order=new OrderItem[100];
    cus=nullptr;
    checkPaymentBefor=-1;
}

Order::~Order()
{
    delete []order;
}
/*void Order::setTotal()
{
    double total=0;
     for(int i=0;i<numberOfOrderItem;i++)
        total+=order[i].get_price();
        this->total=total;

}*/
string Order::getDate()
{
    return date;

}
double Order::CalculateTotal()
{
    if(checkPaymentBefor==-1)
    {

        double total=0;
     for(int i=0;i<numberOfOrderItem;i++)
        total+=order[i].get_price();
        this->total=total;
return total;
    }
    else
    {
        total=checkPaymentBefor;
        return checkPaymentBefor;
    }
}
double Order::getTotal()
{
    return total;
}

void Order::addItem()
{
    order[numberOfOrderItem++].set_data();

}
void Order::display()
{
  for(int i=0;i<numberOfOrderItem;i++)
  {
      order[i].display();
      if(i!=numberOfOrderItem-1)
      cout<<"- - - - - - - - - - - - - -\n";
  }
}
void Order::set_data()
{
    int ID,number;
    string date;
    cout<<"Order ID: ";cin>>ID;this->ID=ID;
    cout<<"Date: ";cin>>date;this->date=date;
    cout<<"Number: ";cin>>number;this->number=number;
}
int Order::getID()
{
       return ID;
}
int Order::getNumber()
{
         return number;
}
