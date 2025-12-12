#include <iostream>

void example1() {
    int i = 0;

    int j = i;
    j = 42;

    int* ref = &j;
    i = *ref;

    std::cout << i << std::endl;
}

void example2() {
    const int i = 42;

    const int& r = i;
    std::cout << r << std::endl;
}

void practice() {
    example1();
    example2();
}