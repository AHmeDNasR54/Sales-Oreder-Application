#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include<string>
using namespace std;

class Product
{
        private:
            string name;
            string number;
            int id;
            int type;
            double price;



    public:
        Product();
        void set_data();
        void testSetData(string name,string number,int id,int type,double price);// test for me to use it in stock untill i create operator overload
        void updateProductInformation();
        void display();
        string get_name();
        string get_number();
        int get_id();
        int get_type();
        double get_price();
        virtual ~Product();

    protected:

};

#endif // PRODUCT_H
