#ifndef TRANSACTION_H
#define TRANSACTION_H
#include"Payment.h"
#include"Cash.h"
#include"Credit.h"
#include"Check.h"
#include"Order.h"
#include<iostream>
#include<string>
using namespace std;

class Transaction
{
        private:
         string transactionDate;
         Payment **payment;
         Order *order;
         int numberofPayments=0;
         double totalPayments;
    public:
      void addPayment();
      void set_transactionDate(string transactionDate);
   //   void set_totalPayments();
      double get_totalPayments();
      string get_transactionDate();
        Transaction();
        virtual ~Transaction();

    protected:

};

#endif // TRANSACTION_H
