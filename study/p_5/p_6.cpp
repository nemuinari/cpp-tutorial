#include <iostream>

class Marker {
public:
  Marker();
  ~Marker();
};

// coments
Marker::Marker() {
  std::cout << "Constructor: " << this << std::endl;
}

Marker::~Marker() {
  std::cout << "Destructor: " << this << std::endl;
}

void copy(Marker m) {
  std::cout << "copy: " << &m << std::endl;
}

void reference(const Marker& m) {
  std::cout << "reference: " << &m << std::endl;
}

void practice() {
  Marker m;

  std::cout << "Before pass by value" << std::endl;
  copy(m);
  std::cout << "After pass by value" << std::endl;

  std::cout << "Before pass by reference" << std::endl;
  reference(m);
  std::cout << "After pass by reference" << std::endl;
}
