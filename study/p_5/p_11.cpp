#include <iostream>

void function(int a, int b, int c) {
    std::cout << "Function called with a="
              << a << ", b="
              << b << ", c="
              << c << std::endl;
}

void practice() {
    int x = 10;
    int y = 20;
    int z = 30;

    function(x, y, z);

    auto lambda = [](int a, int b, int c) {
        std::cout << "Lambda called with a="
                  << a << ", b="
                  << b << ", c="
                  << c << std::endl;
    };
    lambda(x, y, z);
}
