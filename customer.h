#ifndef customer_h
#define customer_h 2016
#include<string>
#include"order.h"
using namespace std;

class Customer {
public:
    Customer(string cname, int cphone, double cwallet, Order corder){
        name = cname;
        phone = cphone;
        wallet = cwallet;
        order.push_back(corder);
    }

    string get_customer_name() {
        return name;
    }
    int get_customer_phone() {
        return phone;
    }
    
    double get_customer_wallet() {
        return wallet;
    }
    
    Order get_customer_oder(int order_index) {
        return order[order_index];
    }
private:
    string name;
    int phone;
    double wallet;
    vector<Order> order;
    
};

#endif 
