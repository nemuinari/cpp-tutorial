#include <iostream>
#include <vector>
#include <set>

int main() {
    std::set<int> x = {0, 1, 2, 3, 4};

    for (auto it = x.begin(); it != x.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}