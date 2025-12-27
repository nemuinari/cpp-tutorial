#include <iostream>

void set_referenceA(int& value) {
    std::cout << "referenceA: " << value << std::endl;
}

void set_referenceB(int& value) {
    // オーバーロード
    value += 10;
    std::cout << "referenceB: " << value << std::endl;
}

void practice() {
    int value = 5;
    set_referenceA(value);                              // referenceA: 5
    set_referenceB(value);                              // referenceB: 15
    std::cout << "final value: " << value << std::endl; // final value: 15
}
