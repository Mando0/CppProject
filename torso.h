#ifndef torso_h
#define torso_h 2016
#include<string>
#include<vector>
#include "head.h"
#include "battery.h"
#include "locomotor.h"
#include "arm.h"
#include "robot_parts.h"


using namespace std;

class Torso : public Robot_Parts {
public:

    string get_name(){
        return name;
    }
    string get_description(){
        return description;
    }
    int get_part_number(){
        return part_number;
    }
    double get_weight(){
        return weight;
    }
    double get_cost(){
        return cost;
    }
    int get_compartments(){
        return battery_compartments;
    }
    void set_compartments(int c){
        battery_compartments = c;
    }
    void set_torso_arm(Arm arms){
        arm.push_back(arms);
    }
    void get_torso_battery(Battery batteries){
        battery.push_back(batteries);
    }
    Head get_torso_head(){
        return head;
    }
   /* void get_torso_locomotor(){
        return locomotor;
    }*/
protected:

    int battery_compartments;
    Head head;
    //Locomotor locomotor;
    vector<Battery> battery;
    vector<Arm> arm;
};

#endif
