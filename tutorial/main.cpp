#include <iostream>
#include <array>
#include <string>
#include <tuple>
#include <vector>

int main() {
    std::vector<int> x = {0, 1, 2, 3, 4};

    x.emplace_back(5);  // 末尾に 5 を追加
    for (int i = 0; i < x.size(); ++i) {
        std::cout << x[i] << std::endl;
    }
    return 0;
}