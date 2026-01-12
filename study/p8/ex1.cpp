#include <iostream>
// #include <iomanip> // manipulators

void execute() {
    int value = 12345;

    std::cout.setf(std::ios::hex, std::ios::basefield);
    std::cout.setf(std::ios::left, std::ios::adjustfield);
    std::cout.width(16);
    std::cout.fill('=');

    std::cout << value << std::endl;
}
