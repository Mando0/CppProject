#ifndef __ROBOT_MODEL_H
#define __ROBOT_MODEL_H 2016
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Robot_Model {
  private:
    string name;
    int model_number;
    double price;
    double max_speed;
    //vector<Robot_Part> robot_parts;
  public:
    Robot_Model(string rm_name, int rm_model_number, double rm_price, double rm_max_speed) :
      name(rm_name), model_number(rm_model_number), price(rm_price), max_speed(rm_max_speed) { }
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
};

#endif
