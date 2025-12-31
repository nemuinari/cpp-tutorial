#include <iostream>

class Counter
{
    int value;

public:
    Counter()
      : value{0} {}

    int operator()()
    {
        return ++value;
    }
    int operator()(int n)
    {
        value += n;
        return value;
    }

    void show() const
    {
        std::cout << "Counter value: " << value << std::endl;
    }
};

void practice()
{
    Counter c;

    c.show();
    c();
    c.show();
    c();
    c.show();
    c(-2);
    c.show();
}
