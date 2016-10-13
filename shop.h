#ifndef __SHOP_H
#define __SHOP_H 2016
#include <iostream>
#include "Robot_Model.h"
#include <string>
#include <vector>
using namespace std;

class Shop {
  public:
    void create_model() {
      Robot_Model robot("robot", 1, 10.00, 100.00);
      robot_model.push_back(robot);
    }
    void create_component();
    string get_robot_name() {
      return robot_model[0].get_name();
    }
    int get_robot_model_number() {
      return robot_model[0].get_model_number();
    }
    int get_robot_price() {
      return robot_model[0].get_price();
    }
    double get_robot_max_speed() {
      return robot_model[0].get_max_speed();
    }
  private:
    vector<Robot_Model> robot_model;
};

#endif
