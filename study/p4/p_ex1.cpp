#include <iostream>

class Example {
    int value;

public:
    inline Example();

    void set_value(int value) {
        this->value = value;
    }

    inline void next() {
        std::cout << "next value: " << value << std::endl;
    }
};

Example::Example() : value(0) {}

void practice() {
    Example E;

    E.set_value(10);
    E.next();
}
