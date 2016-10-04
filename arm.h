#ifndef arm_h
#define arm_h 2016
#include<string>
using namespace std;

class Arm {
public:
    Arm(string a_name, string a_description, int a_part, double a_weight, double a_cost, int a_speed):name(a_name),description(a_description),part_number(a_part),weight(a_weight),cost(a_cost),speed(a_speed){}
    
    string get_arm_name(){
        return name;
    }
    string get_arm_description(){
        return description;
    }
    int get_arm_number(){
        return part_number;
    }
    double get_arm_weight(){
        return weight;
    }
    double get_arm_cost(){
        return cost;
    }
    int power_consumed(){
        return speed;
    }
private:
    string name;
    string description;
    int part_number;
    double weight;
    double cost;
    int speed;
};


#endif
