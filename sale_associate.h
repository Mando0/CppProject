#ifndef sale_associate_h
#define sale_associate_h 2016
#include<string>
#include"order.h"
using namespace std;

class Sale_Associate {
public:
    void set_employee_name(string ename) {
        name = ename;
    }
    string get_employee_name() {
        return name;
    }
    void set_employee_phone(int ephone) {
        phone = ephone;
    }
    int get_employee_phone() {
        return phone;
    }
    void set_sa_order(Order orders) {
        order.push_back(orders);
    }
    Order get_sa_oder(int order_index) {
        return order[order_index];
    }
private:
    string name;
    int number;
    vector<Order> order;
    
};
#endif
