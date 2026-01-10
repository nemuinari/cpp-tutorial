#include <iostream>
#include <iomanip>
#include <cmath>

void practice() {
    float pi = M_PI;
    int value = 1234;

    std::cout << std::scientific << pi << std::endl;
    std::cout << std::dec << std::right << std::setw(8) << std::setfill('0') << value << std::endl;
}
