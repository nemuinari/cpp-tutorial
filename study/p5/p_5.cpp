#include <initializer_list>
#include <iostream>

// std::initializer_list
class example {
  int* value;
  size_t size;

public:
  example(std::initializer_list<int> init);
  ~example();

  void set_value(int i, int n) {
    value[i] = n;
  }

  void show() const {
    std::cout << "value: " << *value << std::endl;
    for (size_t i = 0; i < size; ++i) {
      std::cout << value[i] << " ";
    }
    std::cout << std::endl;
  }
};

example::example(std::initializer_list<int> init) : value{new int[init.size()]}, size{init.size()} {
  int i = 0;
  for (int e : init) {
    value[i] = e;
    i += 1;
  }
}

example::~example() {
  delete[] value;
}

void practice() {
  example e = {0, 1, 2, 3, 4};

  e.set_value(3, 99);
  e.show();
}
