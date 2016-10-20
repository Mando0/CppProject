#ifndef __ROBOT_MODEL_H
#define __ROBOT_MODEL_H 2016
#include "head.h"
#include "arm.h"
#include "locomotor.h"
#include "battery.h"
#include "torso.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Robot_Model {
  private:
    string name;
    Head h;
    Arm a;
    Locomotor l;
    Battery b;
    Torso t;
    int model_number;
    double price;
    double max_speed;
    //vector<Robot_Part> robot_parts;
  public:
    void set_name(string n) {
      name = n;
    }
    void set_model_number(int n) {
      model_number = n;
    }
    void set_price(int cost) {
      price = cost;
    }
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
    void set_locomotor(Locomotor locomotor) {
      l = locomotor;
    }
    void set_battery(Battery battery) {
      b = battery;
    }
    void set_torso(Torso torso) {
      t = torso;
    }
    void get_head() {
      cout << h.get_name() << endl;
    }
    void get_arm() {
      cout << a.get_name() << endl;
    }
};

#endif
