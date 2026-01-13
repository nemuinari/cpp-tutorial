#include <iostream>

template <typename T>
class Base {

public:
    template <typename U>
    T foo(U value) {
        return value;
    }

    template <typename U>
    T bar(U value);
};

template <typename T>
template <typename U>
T Base<T>::bar(U value) {
    return value * 2;
}

void execute() {
    Base<int> bi;
    std::cout << "initialize: " << bi.foo(100) << std::endl;
    std::cout << "initialize: " << bi.bar(100) << std::endl;

    Base<float> bf;
    std::cout << "float: " << bf.foo(3.14f) << std::endl;
    std::cout << "float: " << bf.bar(3.14f) << std::endl;

    Base<double> bd;
    std::cout << "double: " << bd.foo(2.71828) << std::endl;
    std::cout << "double: " << bd.bar(2.71828) << std::endl;
}
