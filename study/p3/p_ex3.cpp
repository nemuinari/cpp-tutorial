#include <iostream>

class Base {
    int a;
    int b;

public:
    void set_numbers(int a, int b);
    int get_total() const;
};

class Derived : public Base {
    int c;

public:
    void set_number(int a, int b, int c);  // オーバーロード
    int get_total() const;
};

void Base::set_numbers(int a, int b) {
    this->a = a;
    this->b = b;
}

void Derived::set_number(int a, int b, int c) {
    Base::set_numbers(a, b);
    // this->a = a;
    // this->b = b;
    this->c = c;
}

int Base::get_total() const {
    return a + b;
}

int Derived::get_total() const {
    return Base::get_total() + c;
    // a + b + c;
}

void practice() {
    Base base;

    base.set_numbers(3, 7);
    std::cout << "Total(a + b): " << base.get_total() << std::endl;

    Derived d;

    d.set_number(4, 5, 8);
    std::cout << "Total(a + b + c): " << d.get_total() << std::endl;
}