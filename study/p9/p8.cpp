#include <iostream>
#include <vector>

// using alias template
template <typename T>
using vector_reference = typename std::vector<T>::reference;

template <typename T>
vector_reference<T>

at(std::vector<T>& vec, size_t index) {
    return vec[index];
}

void execute() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    vector_reference<int> ref = at(numbers, 2);
    std::cout << "Original value at index 2: " << ref << std::endl;

    ref = 100;  // Modify the value through the reference
    std::cout << "Modified value at index 2: " << numbers[2] << std::endl;
}
