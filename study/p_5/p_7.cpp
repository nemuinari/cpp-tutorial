#include <iostream>
#include <string>

class Object {
  int value;

public:
  Object(int value) : value{value} {
    // int's copy constructor
  }

  const int& get_value() const {
    return value;
  }
};

void practice() {
  int i = 42;
  Object obj{i};
  const int& value = obj.get_value();
  std::cout << value << std::endl;
}

/*
// Returning references from functions
int& function(int& value) {
  return value;
}

void practice() {
  int i = 0;
  int& value = function(i);
  value = 10;

  std::cout << value << std::endl;
}

// Returning references to class members
class Object {
  std::string name;

public:
  Object(std::string name);

  const std::string& get_name() const;
};

Object::Object(std::string name) : name{name} {
  // string's copy constructor
}

const std::string& Object::get_name() const {
  return name;
}

void practice() {
  Object obj{" --- Object is Big --- "};

  const std::string& name = obj.get_name();
  std::cout << name << std::endl;
}

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
*/
