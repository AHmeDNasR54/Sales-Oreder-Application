#include "Customers.h"

Customers::Customers()
{
    cus=new Customer*[100];
}

Customers::~Customers()
{
    delete []cus;// not correct i have to make afor loop to delete every customer
}
Customer* Customers::searchForCustomer(int id)
{
   bool isCustomerExist=false;
 // cout<<"Enter ID for the customer you want...\n";
 // cin>>id;
  for(int i=0;i<numberOfCustomers;i++)
  {
      if(id==cus[i]->get_id())
      {
          isCustomerExist=true;
          return cus[i];
      }
  }
  if(!isCustomerExist)
  {
      //cout<<"There is no customer has this id\n";
     // Customer *c=new Customer;c->test=-1;
      return NULL;//*c;
  }
}
void Customers::addCustomer()
{
   // Customer*Test=new Customer;Test->test=-1;
    //Customer*c=new Customer;
    //c->set_data();
    int choice;
    cout<<"Choose which customer do you want to add (1-person 2-company)\nEnter your choice(1 or 2)..";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cus[numberOfCustomers]=new Person;
        cus[numberOfCustomers]->set_data();break;
    case 2:
        cus[numberOfCustomers]=new Company;
        cus[numberOfCustomers]->set_data();break;

    }
   // cus[numberOfCustomers].set_data();
    if(searchForCustomer(cus[numberOfCustomers]->get_id())==NULL)// cus[numberOfCustomers].get_id()).test==Test->test)
    {
    numberOfCustomers++;
        cout<<"Saved successfully\n";
    }
    else {
       cout<<"There is another customer has this ID.this is his details..\n";
       searchForCustomer( cus[numberOfCustomers]->get_id())->display();
       cout<<"******\n";
       cout<<"(1)Update this customer\n(2)Add another customer and keep the previous one\n(3)Return to main menu\nPlease,Choose your answer..(1-2)..?";
       int choice2;
       cin>>choice2;
       switch(choice2)
       {
       case 1:
               searchForCustomer( cus[numberOfCustomers]->get_id())->set_data();
               break;

       case 2:
                    cus[numberOfCustomers++]->set_data();
                   break;
       case 3:
        return;
       }
    }

}
void Customers::editCustomer()
{
    int id;
    cout<<"Enter id for the customer you want to edit..\n";
    cin>>id;
    if(searchForCustomer(id)!=NULL)
    {
        cout<<"his details:\n";
        searchForCustomer(id)->display();
          cout<<"********\n";

            cout<<"now ,update this customer\n";
            searchForCustomer(id)->set_data();
    }
    else cout<<"there is no customer has this id\n";

}
void Customers::deleteCustomer()
{
        int id;
    cout<<"Enter id for the customer you want to delete..\n";
    cin>>id;
    if(searchForCustomer(id)!=NULL)
    {
        cout<<"his details:\n";
            searchForCustomer(id)->display();
            cout<<"********\n";
            cout<<"Are you sure you want to delete this customer (y/n)..?\n";
            char choice;
            cin>>choice;
            if(choice=='y'||choice=='Y')
            {
                for(int i=0;i<numberOfCustomers;i++)
                    if(id==cus[i]->get_id())
                {
                    for(int x=i;x<numberOfCustomers;x++)
                        cus[x]=cus[x+1];
                        break;
                }
                cout<<"this customer is deleted successfully\n";

            }
            else return;
    }
        else cout<<"there is no customer has this id\n";
}
void Customers::display()
{
                for(int i=0;i<numberOfCustomers;i++)
    {
                    cus[i]->display();
                if(i!=numberOfCustomers-1)
                    cout<<"**********\n";
    }
}
