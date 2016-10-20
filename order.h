#ifndef order_h
#define order_h 2016
#include<string>
#include"customer.h"
#include"date.h"
#include"status.h"
#include"sale_associate.h"
using namespace std;

class Order {
public:
    void set_order_number(int n) {
        number = n;
    }
    int get_order_number() {
        return number;
    }
    Customer get_customer_info() {
        return customer;
    }
    Sale_Associate get_sale_associate() {
        return associate;
    }
    Date get_order_date() {
        return date;
    }
    Status get_order_status() {
        return status;
    }
    
private:
    int number;
    Customer customer;
    Sale_Associate associate;
    Date date;
    Status status;
};
#endif
