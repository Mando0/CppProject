#include "controller.h"
#include "view.h"
#include "shop.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Controller::cli() {
  int cmd = -1;
  while( cmd != 0 ) {
    view.show_menu();
    cout << "Command? :";
    cin >> cmd;
    cin.ignore(); 
    execute_main_menu_cmd(cmd);
  }
}

void Controller::execute_main_menu_cmd(int cmd) {
  if (cmd == 1) {
    while(cmd != 0) {
      view.show_create();
      cout << "Command? :";
      cin >> cmd;
      cin.ignore();
    }
  }
}
