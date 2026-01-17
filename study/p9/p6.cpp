#include <iostream>

class Base {
public:
  template <auto v> void show() { std::cout << v << std::endl; }
};

void execute() {
  Base b;
  b.show<0>();
  b.show<'A'>();
}
// type deduction for non-type template parameters
