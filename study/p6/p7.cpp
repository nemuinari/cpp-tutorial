#include <iostream>
#include <memory>
#include <utility>

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
};

std::unique_ptr<Base> allocate()
{
    std::cout << "Allocating Base" << std::endl;
    std::unique_ptr<Base> ptr{new Base{}};

    return ptr;
}

void practice()
{
    {
        std::unique_ptr<Base> ptr;

        std::cout << " --- Starting --- " << std::endl;
        ptr = allocate();
    }
    std::cout << " --- Ending --- " << std::endl;
}
