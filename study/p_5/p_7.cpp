#include <iostream>

// global variable pointer
int x;
int& get_x() {
  return x;
}

void practice() {
  x = 10;
  int& y = get_x();
  y = 100;
  std::cout << x << std::endl;
}
