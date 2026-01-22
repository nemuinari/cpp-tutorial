#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

// sort number
class Base {
    std::vector<int> values;

public:
    Base(std::vector<int> vals) : values(std::move(vals)) {}

    void sort_func() {
        // sort order
        std::sort(values.begin(), values.end());

        // push_back
        values.push_back(std::move(4));

        for (const auto& val : values) {
            show(val);
        }
    }

    void show(int val) const {
        std::cout << val << " ";
    }
};

int main() {
    std::vector<int> vals = {5, 3, 4, 1, 2};
    Base b(std::move(vals));

    b.sort_func();

    return 0;
}
