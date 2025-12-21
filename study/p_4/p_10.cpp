#include <iostream>

void hello() {
    std::cout << "hello!!" << std::endl;
}

void goodbye() {
    std::cout << "goodbye!!" << std::endl;
}

void practice() {
#define hello goodbye
    hello();
#undef hello
    hello();
}

