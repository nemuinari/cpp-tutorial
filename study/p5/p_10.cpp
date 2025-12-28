#include <iostream>

class A {
    int value = 0;

public:
    void set(int value) {
        this->value = value;
    }
    void foo();

    void set_copy(int value) {
        [this, value]() mutable {
            this->value = value;
        }();
    }
    void bar();
};

void A::foo() {
    auto lambda = [this]() {
        std::cout << "foo_value: " << value << std::endl;
    };
    lambda();
}

void A::bar() {
    auto lambda = [this]() {
        std::cout << "bar_value: " << value << std::endl;
    };
    lambda();
}

void practice() {
    A a;

    a.set(42);
    a.foo();

    a.set_copy(84);
    a.bar();
}
