#include <iostream>

// template parameter pack example
template <typename... T>
void func(T... args) {
    std::cout << "template parameter pack arguments count: " << sizeof...(T) << std::endl;

    std::cout << "function parameter pack arguments count: " << sizeof...(args) << std::endl;
}

int main() {
    func(1, 2.5, "hello", 'c');
    return 0;
}
