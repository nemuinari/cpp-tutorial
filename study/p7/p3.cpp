#include <iostream>

class Base
{
public:
    void method_Base();
};

void Base::method_Base()
{
    std::cout << "Base::method_Base called" << std::endl;
}

class Derived : public Base
{
public:
    void method_Derived();
};

void Derived::method_Derived()
{
    std::cout << "Derived::method_Derived called" << std::endl;
}

void practice()
{
    Derived d;
    d.method_Base();    // OK.
    d.method_Derived(); // OK.

    Base& b = d;
    b.method_Base(); // OK.
    // b.method_Derived(); // Error: 'class Base' has no member named 'method_Derived'

    Base* pb = &d;
    pb->method_Base(); // OK.
    // pb->method_Derived(); // Error: 'class Base' has no member named 'method_Derived'
}
