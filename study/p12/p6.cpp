#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {21, 34, 55, 89, 16};

    auto n_copy = numbers;  // Copy of the original vector
    std::sort(n_copy.begin(), n_copy.end());

    std::cout << "Original vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted copy: ";
    for (const auto& num : n_copy) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
