#ifndef STOCK_H
#define STOCK_H
#include<iostream>
#include<string>
#include"Product.h"
using namespace std;

class Stock
{
    public:
            int numberOfProducts=0;
            Product *pro;
            int quantity[100];// assume the maximum number of products is 100


        Stock();
        void addProductToStock(Product p,/*int id,*/int quantity);
        void updateProductInStock(int id,int quantity);
        void deleteProductFromStock(int id);
        bool checkIDforProduct(int id);
        int getIndexOfProduct(int id);
        int getQuantityOfProduct(int id);
        void dispaly();
        virtual ~Stock();

    protected:

};

#endif // STOCK_H
