#ifndef __BATTERY_H
#define __BATTERY_H 2016
#include <iostream>
#include <string>

using namespace std;

class Battery {
  public: 
    Battery (string b_name, string b_description, int b_part_number, double b_weight, double b_cost
        , double b_energy, double b_max_power) :
      name(b_name), description(b_description), part_number(b_part_number), weight(b_weight),
      cost(b_cost), energy(b_energy), max_power(b_max_power) { }

    string get_battery_name() {
      return name;
    }

    string get_battery_description() {
      return description;
    }

    int get_battery_number() {
      return part_number;
    }
    
    double get_battery_weight() {
      return weight;
    }

    double get_battery_cost() {
      return cost;
    }

    double get_energy() {
      return energy;
    }
    
    double get_max_power() {
      return max_power;
    }

  private:
    string name;
    string description;
    int part_number;
    double weight;
    double cost;
    double energy;
    double max_power; 
};

#endif
