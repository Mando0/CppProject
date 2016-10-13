#ifndef __VIEW_H
#define __VIEW_H 2016
#include "shop.h"
#include <iostream>
#include <string>
using namespace std;

class View {
  public:
    View(Shop& sho) : shop(sho) { }
    void show_menu(); 
    void show_create();
    void show_robot_model();
    void create_parts();
  private:
    Shop& shop;
};

#endif
