#include <iostream>
#include <string>
#include "torso.h"
#include "head.h"
using namespace std;

int main() {
    
    cout << "Test Torso Component"<<endl;
    cout << "Torso first torso 1 2.0 3.0 3" <<endl;
    Torso t;
    t.set_name("Battery");
    t.set_description("first battery");
    t.set_part_number(1);
    t.set_weight(2.0);
    t.set_cost(3);
    t.set_compartments(20);
    t.get_torso_head();
    
    cout << t.get_name() << " "<< t.get_description()<< " " << t.get_part_number() << " " << t.get_weight() << " " << t.get_cost() << " " << t.get_compartments()<<endl;
}
