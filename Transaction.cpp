#include "Transaction.h"

Transaction::Transaction()
{
    payment=new Payment*[10];
    order=nullptr;
}

Transaction::~Transaction()
{
    delete []payment;
}
void Transaction::addPayment()
{
    cout<<"Pay by 1-Credit 2-Cash 3-Check ?\nchoose your answer (1-3)...";
    int answer;cin>>answer;
    switch(answer)
    {
    case 1:
        payment[numberofPayments]=new Credit;
        payment[numberofPayments++]->set_data();
        break;
    case 2:
        payment[numberofPayments]=new Cash;
        payment[numberofPayments++]->set_data();
        break;
    case 3:
        payment[numberofPayments]=new Check;
        payment[numberofPayments++]->set_data();
    }
}
void Transaction::set_transactionDate(string transactionDate)
{
    this->transactionDate=transactionDate;
}
string Transaction::get_transactionDate()
{
    return transactionDate;
}
/*void Transaction::set_totalPayments()
{
    double total=0;
    for(int i=0;i<numberofPayments;i++)
        total+=payment[i].get_pay();
    totalPayments=total;
}*/
double Transaction::get_totalPayments()
{
      double total=0;
    for(int i=0;i<numberofPayments;i++)
        total+=payment[i]->get_pay();
    totalPayments=total;
    return totalPayments;
}
