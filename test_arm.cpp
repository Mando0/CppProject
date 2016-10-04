#include <iostream>
#include <string>
#include "arm.h"
using namespace std;

int main() {
    
    cout << "Test Arm Component"<<endl;
    cout << "Arm first arm 1 4 2 20" <<endl;
    Arm a("Arm","first arm",1,4.0,2.0,20);
    cout << a.get_arm_name() << " "<< a.get_arm_description()<< " " << a.get_arm_number() << " " << a.get_arm_weight() << " " << a.get_arm_cost() << " " << a.power_consumed()<< endl;
}
