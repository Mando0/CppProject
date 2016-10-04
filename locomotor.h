#ifndef locomotor_h
#define locomotor_h 2016
#include<string>
using namespace std;

class Locomotor {
public:
    Locomotor(string l_name, string l_description, int l_part, double l_weight, double l_cost, int speed):name(l_name),description(l_description),part_number(l_part),weight(l_weight),cost(l_cost), max_speed(speed){}

    string get_loco_name(){
        return name;
    }
    string get_loco_description(){
        return description;
    }
    int get_loco_number(){
        return part_number;
    }
    double get_loco_weight(){
        return weight;
    }
    double get_loco_cost(){
        return cost;
    }
    int power_consumed(){
        return max_speed;
    }

private:
    string name;
    string description;
    int part_number;
    double weight;
    double cost;
    int max_speed;
};

#endif
