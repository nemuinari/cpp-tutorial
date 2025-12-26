#include <iostream>
#include <string>

class Object {
  int id;
  std::string name;
  int price;

public:
  Object() : id(0), name("NO NAME"), price(0) {
    std::cout << "--- Default Constructor ---" << std::endl;
  }
  explicit Object(int id, std::string name, int price) : id(id), name(name), price(price) {
    std::cout << "--- Explicit Constructor name: " << name << std::endl;
  }
  ~Object() {
    std::cout << "--- Destructor ---" << std::endl;
  }
  void show() const {
    std::cout << "Object show_id: " << id << std::endl;
    std::cout << "Object show_name: " << name << std::endl;
    std::cout << "Object show_price: " << price << std::endl;
    std::cout << std::endl;
  }
};

void practice() {
  Object* obj = new Object[10]{
      Object{1, "first", 1000},
      Object{2, "second", 2000},
  };

  obj[0].show();
  obj[1].show();
  obj[2].show();

  delete[] obj;
}
