#ifndef __SHOP_H
#define __SHOP_H 2016
#include <iostream>
#include "Robot_Model.h"
#include "head.h"
#include <string>
#include <vector>
using namespace std;

class Shop {
  public:
    string name;
    string description;
    int part_number;
    int weight;
    int cost;
    void create_model() {
      if( head.empty()) {
        cout << "Need to create head part" << endl;
      }
      Robot_Model robot_model;
      robot_model.set_head(head[0]);
      robot_model.set_arm(arm[0]);
    }
    void create_part();
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
    void create_head() {
      Head h;
      cout << "Name of head?: " << endl;
      cin >> name;
      h.set_name(name);
      cout << "Set description: " << endl;
      cin >> description;
      h.set_description(description);
      cout << "What is part number?: " << endl;
      cin >> part_number;
      h.set_part_number(part_number);
      cout << "What is the weight?: " << endl;
      cin >> weight;
      h.set_weight(weight);
      cout << "What is the cost?: " << endl;
      cin >> cost;
      h.set_cost(cost);
      head.push_back(h);
    }
    void get_head_vector() {
      cout << head[0].get_name() << endl;
    }
    void create_arm() {
      Arm a;
      cout << "Name of arm?: " << endl;
      cin >> name;
      a.set_name(name);
      cout << "Set description: " << endl;
      cin >> description;
      a.set_description(description);
      cout << "What is part number?: " << endl;
      cin >> part_number;
      a.set_part_number(part_number);
      cout << "What is the weight?: " << endl;
      cin >> weight;
      a.set_weight(weight);
      cout << "What is the cost?: " << endl;
      cin >> cost;
      a.set_cost(cost);
      arm.push_back(a);
    }
  private:
    vector<Robot_Model> robot_model;
    vector<Head> head;
    vector<Arm> arm;
};

#endif
