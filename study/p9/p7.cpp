#include <iostream>

// forwarding references

template <typename T>
void forward(T&& v) {
    std::cout << "value: " << v << std::endl;
}

void execute() {
    int v = 100;
    forward(v);    // calls left value version
    forward(200);  // calls right value version
}

// const reference parameter to deduce type
/*
template <typename T>
void foo(const T& value) {
    std::cout << "value: " << value << std::endl;
}

void execute() {
    int v = 100;
    char c = 'Z';

    foo<int&>(v);         // T deduced as int
    foo<const char&>(c);  // T deduced as const char
}
*/
