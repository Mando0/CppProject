#ifndef __ROBOT_MODEL_H
#define __ROBOT_MODEL_H 2016
#include "head.h"
#include "arm.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Robot_Model {
  private:
    string name;
    Head h;
    Arm a;
    int model_number;
    double price;
    double max_speed;
    //vector<Robot_Part> robot_parts;
  public:
    double get_max_speed() {
      return max_speed;
    }
    string get_name() {
      return name;
    }
    double get_price() {
      return price;
    }
    int get_model_number() {
      return model_number;
    }
    void set_head(Head head) {
      h = head;
    }
    void set_arm(Arm arm) {
      a = arm;
    }
};

#endif
