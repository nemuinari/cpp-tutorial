#include <iostream>

class Base {
public:
    template <typename T> T id(T a) { return a; };
};

void execute() {
    Base b;
    std::cout << "initialize: " << b.id<int>(1) << std::endl;
    std::cout << "float: " << b.id<float>(1.1f) << std::endl;
    std::cout << "double: " << b.id<double>(1.11) << std::endl;
}

/* template on function
template <typename T> T add(T a, T b, T c) {
    T r = a * b + c;
    return r;
}

void execute() {
    std::cout << "initialize: " << add<int>(1, 2, 3) << std::endl;
    std::cout << "float: " << add<float>(1.1f, 2.2f, 3.3f) << std::endl;
    std::cout << "double: " << add<double>(1.11, 2.22, 3.33) << std::endl;
}
*/
