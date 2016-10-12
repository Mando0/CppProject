#include "controller.h"
#include "shop.h"
#include <iostream>
using namespace std;

int main() {
  Shop shop;
  Controller controller(shop);
  controller.cli();
}
