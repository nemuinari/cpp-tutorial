#include <iostream>
#include <string>

// template class to type deduction
template <typename T>
class Base {
public:
    T value;
    Base(T v) : value(v) {}
};

template <typename T>
auto deduction(Base<T> param) {
    std::cout << "type of Base<T>: " << param.value << std::endl;
}

void execute() {
    Base bi(10);
    Base bf(3.14f);
    Base bd(2.71828);
    Base bs("Hello, World!");

    deduction(bi);
    deduction(bf);
    deduction(bd);
    deduction(bs);

    deduction(Base(200));
    deduction(Base(std::string("Hello, Deduction")));
}

/* template function to type deduction
template <typename T>
auto deduction(T param) {
    std::cout << "Function Called: " << param << std::endl;
}

void execute() {
    int x = 10;
    const int cx = 100;
    int* ptr = &x;

    deduction(x);   // T deduced as int
    deduction(cx);  // T deduced as const int
    deduction(ptr); // T deduced as int*
    deduction(&x);  // T deduced as const int*
}
*/
