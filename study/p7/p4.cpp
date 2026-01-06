#include <iostream>

/* 仮想関数 */
class Base
{
    /* privateな仮想関数 */
    virtual void private_method()
    {
        std::cout << "Base class private method called." << std::endl;
    };

public:
    /* 仮想デストラクタ */
    virtual ~Base()
    {
        std::cout << "Base class destructor called." << std::endl;
    }

    /* オーバーライド可能な仮想関数 */
    virtual void method()
    {
        std::cout << "Base class method called." << std::endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "Derived class destructor called." << std::endl;
    }

    /* オーバーライド */
    void method() override
    {
        std::cout << "Derived class method called." << std::endl;
    }

    void private_method() override
    {
        std::cout << "Derived class private method called." << std::endl;
    }
};

Base *allocate()
{
    return new Derived();
}

void practice()
{
    auto ptr = allocate();

    ptr->method(); // Derived class method called.
    // ptr->private_method(); // コンパイルエラー:
    // Baseクラスのprivateメソッドにはアクセスできない

    delete ptr;
}