#include <iostream>
#include <string>
#include "view.h"
using namespace std;

void View::show_menu() {
  cout << "Main Menu " << endl;
  cout << "----------" << endl;
  cout << "1 (C)reate" << endl;
  cout << "9 (Q)uit  " << endl;
  cout << endl << endl;
}

void View::show_create() {
  cout << "Create             " << endl;
  cout << "-------------------" << endl;
  cout << "1 Robot Model      " << endl;
  cout << "0 Quit to Main Menu" << endl;
  cout << endl << endl;
}
