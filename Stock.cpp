#include "Stock.h"

Stock::Stock()
{
    pro =new Product[100];
}

Stock::~Stock()
{
    delete []pro;
}
bool Stock::checkIDforProduct(int id)
{
    for(int i=0;i<numberOfProducts;i++)
        if(id==pro[i].get_id())
    {
        return true;
    }
        return false;

}
void Stock::addProductToStock(Product p ,/*int id*/int quantity)// i will create at the end system class ,it will contain an array of products and i will access id from it to this function
{
   /* if(checkIDforProduct(id))
    {
        cout<<"this product is added successfully\n";

    }*/
   // pro[numberOfProducts]=p; i  will create operator overload to make this statement true
   pro[numberOfProducts].testSetData(p.get_name(),p.get_number(),p.get_id(),p.get_type(),p.get_price());
    this->quantity[numberOfProducts++]=quantity;

}
void Stock::updateProductInStock(int id,int quantity)
{
    if(checkIDforProduct(id))
    {
            for(int i=0;i<numberOfProducts;i++)
        if(id==pro[i].get_id())
    {
        this->quantity[i]=quantity;
        cout<<"DONE!\n";
        break;
    }

    }
    else cout<<"There is no product in the stock has this ID\n";

}
void Stock::deleteProductFromStock(int id)
{
        if(checkIDforProduct(id))
    {
    for(int i=0;i<numberOfProducts;i++)
        if(id==pro[i].get_id())
    {
       cout<<"product is : "<<pro[i].get_name()<<endl;
       break;
    }
        cout<<"Are you sure you want to delete this product (y/n)..?\n";
            char choice;
            cin>>choice;
            if(choice=='y'||choice=='Y')
            {
            for(int i=0;i<numberOfProducts;i++)
        if(id==pro[i].get_id())
    {
        for(int x=i;x<numberOfProducts;x++)
        {
            pro[x]=pro[x+1];
            quantity[x]=quantity[x+1];
        }
        cout<<"Deleted successfully\n";
        break;
    }

    }
    }
    else cout<<"There is no product in the stock has this ID\n";

}
int Stock::getQuantityOfProduct(int id)
{

        for(int i=0;i<numberOfProducts;i++)
            if(pro[i].get_id()==id)
        {
            return quantity[i];
        }

}
int Stock::getIndexOfProduct(int id)
{
            for(int i=0;i<numberOfProducts;i++)
                if(id==pro->get_id())
                return i;
}
void Stock::dispaly()
{
    if(numberOfProducts!=0)
    {
     cout<<"Product name  Quantity \n";
    for(int i=0;i<numberOfProducts;i++)
        cout<<pro[i].get_name()<<"   "<<quantity[i];
    }
    else cout<<"The stock is empty\n";
}


