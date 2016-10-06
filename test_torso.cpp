#include <iostream>
#include <string>
#include "torso.h"
#include "head.h"
using namespace std;

int main() {
    
    cout << "Test Torso Component"<<endl;
    cout << "Torso first torso 1 2 3 2 Head first head 2 3 4" <<endl;
    Torso t;
    t.set_name("Torso");
    t.set_description("first torso");
    t.set_part_number(1);
    t.set_weight(2.0);
    t.set_cost(3);
    t.set_compartments(2);
    
    Head h = t.get_torso_head() ;
    h.set_name("Head");
    h.set_description("first head");
    h.set_part_number(2);
    h.set_weight(3.0);
    h.set_cost(4.0);
    
    cout << t.get_name() << " "<< t.get_description()<< " " << t.get_part_number() << " " << t.get_weight() << " " << t.get_cost() << " " << t.get_compartments() << " " << h.get_name() << " " << h.get_description() << " " << h.get_part_number() << " " << h.get_weight() << " " << h.get_cost() << endl;
}
