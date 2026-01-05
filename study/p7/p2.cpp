#include <iostream>

// 継承時のコンストラクターとデストラクターの動作
class Base
{
public:
    Base()
    {
        std::cout << "Base Constructor" << std::endl;
    }
    ~Base()
    {
        std::cout << "Base Destructor" << std::endl;
    }

    explicit Base(int v)
    {
        std::cout << "Base Constructor with value: " << v << std::endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived Constructor" << std::endl;
    }
    ~Derived()
    {
        std::cout << "Derived Destructor" << std::endl;
    }

    explicit Derived(int v)
      : Base{v}
    {
        std::cout << "Derived Constructor with value: " << v << std::endl;
    }
};

void practice()
{
    Derived d{42};
    std::cout << "Inside practice function" << std::endl;
}
