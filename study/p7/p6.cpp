#include <iostream>

class Base
{
    int value;

public:
    explicit Base(int value) : value(value)
    {
        std::cout << "Base constructor called with value: " << value << std::endl;
    }
};

class DerivedA : virtual public Base
{
public:
    DerivedA() : Base(1) { std::cout << "DerivedA constructor called" << std::endl; }
};

class DerivedB : virtual public Base
{
public:
    DerivedB() : Base(2) { std::cout << "DerivedB constructor called" << std::endl; }
};

class MostDerived : public DerivedA, public DerivedB
{
public:
    MostDerived() : Base(3) { std::cout << "MostDerived constructor called" << std::endl; }
};

void practice()
{
    MostDerived obj;
}
