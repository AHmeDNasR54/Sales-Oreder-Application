#include "SalesSystem.h"

SalesSystem::SalesSystem()
{
    product=new Product[100];
    order=new Order[100];
    for(int i=0;i<100;i++)
    {
        order[i].order->stock=&Stock;
    }
    trans=new Transaction[100];
}

SalesSystem::~SalesSystem()
{
    delete []product;
    delete []order;
}
void SalesSystem::addNewProduct()
{
    product[numberOfProducts++].set_data();
}
void SalesSystem::deleteProduct()
{
  int id;
  cout<<"Enter id for product you want to delete: ";cin>>id;
  for(int i=0;i<numberOfProducts;i++)
    if(id==product[i].get_id())
  {
      for(int x=i;x<numberOfProducts;x++)
        product[x]=product[x+1];
      return;
  }
  cout<<"There is no product has this id\n";
}
void SalesSystem::updateProduct()
{
   int id;
  cout<<"Enter id for product you want to update: ";cin>>id;
  for(int i=0;i<numberOfProducts;i++)
    if(id==product[i].get_id())
  {
      product[i].set_data();
      return;
  }
  cout<<"There is no product has this id\n";
}
int SalesSystem::GetIndexOfProduct(int id)
{
    for(int i=0;i<numberOfProducts;i++)
        if(id==product[i].get_id())
        return i;
    return -1;

}
int SalesSystem::GetIndexOfOrder(int id)
{
      for(int i=0;i<numberOfOrders;i++)
        if(id==order[i].getID())
        return i;
    return -1;
}
void SalesSystem::productInStock()
   {
            cout << "===========================================\n";
            cout << "           Stock Information Management \n";
            cout << "===========================================\n";
            cout << "1. Add New Product to stock\n";
            cout << "2. Update Product\n";
            cout << "3. Delete Product from stock\n";
            cout << "===========================================\n";
            cout <<"Enter your choice (1-3): ";int choice;cin>>choice;
                    switch(choice)
            {
            case 1:
                cout<<"Enter id for product you want to add: ";int id;cin>>id;
                if(GetIndexOfProduct(id)!=-1)
                {
                    cout<<"Product name: "<<product[GetIndexOfProduct(id)].get_name()<<endl;
                    cout<<"Enter quantity: ";int quantity;cin>>quantity;
                Stock.addProductToStock(product[GetIndexOfProduct(id)],quantity);
                }
                else cout<<"This id is incorrect\n";
                break;
            case 2:
               cout<<"Enter id for product you want to update its quantity: ";int id2;cin>>id2;
               if(Stock.checkIDforProduct(id2))
                {
                    cout<<"Product name: "<<product[Stock.getIndexOfProduct(id2)].get_name()<<endl;
                    cout<<"Enter quantity: ";int quantity;cin>>quantity;
                    Stock.updateProductInStock(id2,quantity);
                }
              else cout<<"This id is incorrect\n";
              break;
            case 3:
                    cout<<"Enter id for product you want to delete from the stock: ";int id3;cin>>id3;
                   if(Stock.checkIDforProduct(id3))
                {
                    Stock.deleteProductFromStock(id3);
                }
                else cout<<"This id is incorrect\n";

            }
   }

void SalesSystem::DataEntry()
  {
            cout<<"(1)Add,Edit,Delete customer\n";
            cout<<"(2)Add,Edit,Delete product\n";
            cout<<"(3)Add,update,Delete product in stock\n";
            cout<<"Enter your choice (1-3): ";int choice;cin>>choice;
            switch(choice)
            {
                case 1:
            cout << "===========================================\n";
            cout << "           Customer Information Management \n";
            cout << "===========================================\n";
            cout << "1. Add New Customer\n";
            cout << "2. Edit Customer\n";
            cout << "3. Delete Customer\n";
            cout << "===========================================\n";
            cout <<"Enter your choice (1-3): ";int choice2;cin>>choice2;
            switch(choice2)
            {
            case 1:
                customer.addCustomer();
                break;
            case 2:
                  customer.editCustomer();
                  break;
            case 3:
                  customer.deleteCustomer();
            }
                    break;
                case 2:
           cout << "===========================================\n";
            cout << "           Product Information Management \n";
            cout << "===========================================\n";
            cout << "1. Add New Product\n";
            cout << "2. Edit Product\n";
            cout << "3. Delete Product\n";
            cout << "===========================================\n";
            cout <<"Enter your choice (1-3): ";int choice3;cin>>choice3;
                    switch(choice3)
            {
            case 1:
                addNewProduct();
                break;
            case 2:
                  updateProduct();
                  break;
            case 3:
                  deleteProduct();
            }
                    break;
                case 3:
                    productInStock();

            }

  }
void SalesSystem::CreatOrder()
{
    cout<<"Enter customer ID: ";int id;cin>>id;
    if(customer.searchForCustomer(id)!=NULL)
    {
        cout<<"Customer name: "<<customer.searchForCustomer(id)->get_name()<<endl;
        cout<<"Please,Fill this data:\n";
        order[numberOfOrders].set_data();
        cout<<"Now,chose your items.\n";
        char choice='y';
        while(choice=='y'||choice=='Y')
        {
        order[numberOfOrders].addItem();
        cout<<"Add another item? (y\n)..?";cin>>choice;
        }

        order[numberOfOrders++].cus=customer.searchForCustomer(id);

    }
    else cout<<"There is no customer has this id in our system\n";

}
void SalesSystem::UpdateOrder()
{
      cout<<"Enter order id: ";int id;cin>>id;
      if(GetIndexOfOrder(id)!=-1)
      {
          cout<<"Order's details: \n";
          order[GetIndexOfOrder(id)].display();
          cout<<"choose (1) add another items (2) delete items : ";int choice;cin>>choice;
          switch(choice)
          {
          case 1:
            order[GetIndexOfOrder(id)].addItem();
            break;
          case 2:
              cout<<"enter id for product you want to remove from order: ";int id2;cin>>id2;
              for(int i=0;i<order[GetIndexOfOrder(id)].numberOfOrderItem;i++)
              {
                  if(order[GetIndexOfOrder(id)].order[i].get_id()==id2)
                    for(int x=i;x<order[GetIndexOfOrder(id)].numberOfOrderItem;x++)
                    order[GetIndexOfOrder(id)].order[x]=order[GetIndexOfOrder(id)].order[x+1];
              }
              cout<<"Removed successfully! \n";

              }
      }
      else cout<<"there is no order has this id\n";


}
void SalesSystem::payOrder()
{
    cout<<"Enter transaction Date: ";string tdate;cin>>tdate;
    trans[numberOfTransaction].set_transactionDate(tdate);
    cout<<"Enter order id you want to pay: ";int id;cin>>id;
    if(GetIndexOfOrder(id)!=-1)
    {
        cout<<"this order belongs to : "<<order[GetIndexOfOrder(id)].cus->get_name()<<endl;
        cout<<"Total price to be paid: "<<order[GetIndexOfOrder(id)].CalculateTotal()<<endl;
    trans[numberOfTransaction].addPayment();
    char choice='y';
    while(choice=='y'||choice=='Y')
    {
           trans[numberOfTransaction].addPayment();
           cout<<"Another payment..? (y\n)..?";cin>>choice;

    }
    if(trans[numberOfTransaction].get_totalPayments()<order[GetIndexOfOrder(id)].CalculateTotal())
    {
        cout<<"Total payment is: "<<trans[numberOfTransaction].get_totalPayments()<<"The rest is: "<<order[GetIndexOfOrder(id)].CalculateTotal()-trans[numberOfTransaction].get_totalPayments()<<endl;
        order[GetIndexOfOrder(id)].checkPaymentBefor=order[GetIndexOfOrder(id)].CalculateTotal()-trans[numberOfTransaction].get_totalPayments();
    }
    else order[GetIndexOfOrder(id)].checkPaymentBefor=0;

    numberOfTransaction++;
    }
    else cout<<"There is no order has this id\n";
}

void SalesSystem::salesProcess()
{
           cout  << "===========================================\n";
            cout << "           Sales process    \n";
            cout << "===========================================\n";
            cout << "1. Create New Order\n";
            cout << "2. Update Order\n";
            cout << "3. Pay Order \n";
            cout << "===========================================\n";
            cout <<"Enter your choice (1-3): ";int choice;cin>>choice;
            switch(choice)
            {
            case 1:
                CreatOrder();
                break;
            case 2:
              UpdateOrder();
              break;
            case 3:
                payOrder();
                break;

            }

}
void SalesSystem::DisplayTransactionOfOrders()
{
    for(int i=0;i<numberOfOrders;i++)
    {
        cout<<"Customer name : "<<order[i].cus->get_name()<<endl;
        cout<<"Total pay: "<<order[i].CalculateTotal()<<endl;
        if(i>0&&i<numberOfOrders-1)
            cout<<"**********\n";
    }
}

void SalesSystem::Report()
{
           cout  << "===========================================\n";
            cout << "           Report    \n";
            cout << "===========================================\n";
            cout << "1.Display Customers\n";
            cout << "2.Display Stock data\n";
            cout << "3.Display Transaction of orders \n";
            cout << "===========================================\n";
            cout <<"Enter your choice (1-3): ";int choice;cin>>choice;
            switch(choice)
            {
            case 1:
                customer.display();
                break;
            case 2:
                Stock.dispaly();
                break;
            case 3:
                DisplayTransactionOfOrders();

            }
}
