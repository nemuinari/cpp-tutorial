#include <iostream>

struct S_shared {
    static int value;
};

int S_shared::value = 0;

template <typename T>
class S : public S_shared {};

void execute() {
    S<int> s_int;
    S<float> s_float;
    S<double> s_double;

    S<int>::value = 10;
    std::cout << "S<int>::value: " << S<int>::value << std::endl;

    S<float>::value = 3.14f;
    std::cout << "S<float>::value: " << S<float>::value << std::endl;
    // Note: This will print 10 because S<float>::value shares the same static member as
    // S<int>::value

    S<double>::value = 2.718;
    std::cout << "S<double>::value: " << S<double>::value << std::endl;
    // Note: This will also print 10 because S<double>::value shares the same static member as
    // S<int>::value
}

/*
class Base {
public:
    virtual void foo(int i) { std::cout << "Base::foo(): " << i << std::endl; }
};

template <typename T>
class Derived : public Base {
public:
    void foo(T val) override { std::cout << "Derived::foo(): " << val << std::endl; }
};

void execute() {
    Base b;
    b.foo(100); // Calls Base::foo(int)

    Derived<int> di;
    static_cast<Base&>(di).foo(42);
}
*/
