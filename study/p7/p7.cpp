#include <iostream>

class Base
{
public:
    virtual void method_a() { std::cout << "Base::method_a called" << std::endl; }
    virtual void method_b() { std::cout << "Base::method_b called" << std::endl; }
};

class Derived : public Base
{
public:
    void method_a() final { std::cout << "Derived::method_a called" << std::endl; }
    void method_b() override { std::cout << "Derived::method_b called" << std::endl; }
};

class MoreDerived : public Derived
{
public:
    /* final method_a() cannot be overridden
    void method_a() override { std::cout << "MoreDerived::method_a called" << std::endl; }
    */
    void method_b() override { std::cout << "MoreDerived::method_b called" << std::endl; }
};

void practice()
{
    MoreDerived obj;
    obj.method_a(); // Calls Derived::method_a
    obj.method_b(); // Calls MoreDerived::method_b
}
