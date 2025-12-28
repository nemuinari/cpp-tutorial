#include <iostream>

void example();

void practice() { example(); }

void example() {
    char str[] = "length";

    for (char elem : str) {
        if (elem == '\0') {
            break;
        } else {
            std::cout << elem << std::endl;
        }
    }
}