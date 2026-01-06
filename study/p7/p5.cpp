#include <iostream>

// 多重継承
class Base_A
{
    int value;

public:
    Base_A(int v = 0) : value{v} {}
    void method()
    {
        std::cout << "Base_A method called. value = " << value << std::endl;
    };
};

class Base_B
{
    int value;

public:
    Base_B(int v = 0) : value{v} {}
    void method()
    {
        std::cout << "Base_B method called. value = " << value << std::endl;
    }
};

class Derived : public Base_A, public Base_B
{
public:
    Derived(int a, int b) : Base_A(a), Base_B(b) {}
    void show()
    {
        Base_A::method(); // Base_Aのmethodを呼び出す
        Base_B::method(); // Base_Bのmethodを呼び出す
    }
};

void practice()
{
    Derived obj{10, 20};
    obj.show();
}