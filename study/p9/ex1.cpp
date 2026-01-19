#include <iostream>

template <typename T>
class Base {
public:
    template <typename U>
    void foo(U value);
};

template <typename T>
template <typename U>
void Base<T>::foo(U value) {
    std::cout << "value: " << value << std::endl;
}

int main() {
    Base<int> bi;
    bi.foo(100);

    Base<float> bf;
    bf.foo(3.14f);

    return 0;
}
