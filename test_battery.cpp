#include <iostream>
#include <string>
#include "battery.h"

using namespace std;

int main() {
  cout << "Test Battery Component" << endl;
  cout << "Battery first battery 1 4 2 20 40" << endl;
  Battery b("Battery","first battery", 1,4.0,2.0,20,40);
  cout << b.get_battery_name() << " " << b.get_battery_description() << " " << b.get_battery_number()
    << " " << b.get_battery_weight() << " " << b.get_battery_cost() << " " << b.get_energy() 
    << " " << b.get_max_power() << endl;
}
