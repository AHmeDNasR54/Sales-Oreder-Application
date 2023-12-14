#ifndef SALESSYSTEM_H
#define SALESSYSTEM_H
#include"Customers.h"
#include"Customer.h"
#include"Order.h"
#include"Product.h"
#include"Stock.h"
#include"Transaction.h"
#include<iostream>
#include<string>
using namespace std;
class SalesSystem
{
        public:
            Customers customer;
            Product*product;
            Stock Stock;
            Order *order;
            Transaction *trans;
     int numberOfProducts=0;
    int numberOfOrders=0;
    int numberOfTransaction=0;

   void addNewProduct();
   void deleteProduct();
   void updateProduct();
   int GetIndexOfProduct(int id);

   void productInStock();
  void DataEntry();

  void CreatOrder();
  void UpdateOrder();
  int GetIndexOfOrder(int id);
 void payOrder();
  void salesProcess();
  void DisplayTransactionOfOrders();
void Report();

        SalesSystem();
        virtual ~SalesSystem();

    protected:

};

#endif // SALESSYSTEM_H
