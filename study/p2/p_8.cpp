// ラムダ式
#include <iostream>

void practice() {
    float v = 42.2f;

    auto show_value = [&]() { std::cout << v << std::endl; };
    show_value();
}