#include <iostream>

void clear(int& value) {
    value = 0;
}

void practice() {
    int x = 40;
    clear(x);
    std::cout << "Value of x after clear: " << x << std::endl;
}
