#include <iostream>

class product_example_execute {
public:
    int number;
    int _get();
    void _set(int new_number);
};

using product = product_example_execute;

int product::_get() {
    return number;
}

void product::_set(int new_number) {
    number = new_number;
}

void practice() {
    product num;

    num._set(40);
    product* ptr = &num;
    std::cout << "Number: " << ptr->_get() << std::endl;
}