#include <iostream>

void show(int value) {
    std::cout << "Value: " << value << std::endl;
}

// lambda version
void practice() {
    int array[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(array) / sizeof(array[0]);

    auto lambda = [](int* array, size_t length) {
        for (int* ptr = array; ptr < array + length; ++ptr) {
            show(*ptr);
        }
    };
    lambda(array, length);
}
