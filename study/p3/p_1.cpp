#include <iostream>

class A {
    mutable int v;

public:
    explicit A(int value = 0) : v(value) {
    }
    void set(int value);
    int get();  // Non-const
    int get() const {
        std::cout << "Const get() called." << std::endl;
        return v;
    };  // const
};

void A::set(int value) {
    v = value;
}

int A::get() {
    std::cout << "Non-const get() called." << std::endl;
    return v;
}

void practice() {
    A a;
    a.set(42);

    std::cout << "Value from non-const object: " << a.get() << std::endl;

    const A ca{a.get()};
    std::cout << "Value from const object (1st call): " << ca.get()
              << std::endl;
}