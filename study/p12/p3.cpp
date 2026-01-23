#include <iostream>
#include <list>

void print_list(const std::list<int>& li) {
    for (const auto& l : li) {
        std::cout << l << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::list<int> li_a = {5, 2, 9, 1, 5, 6};

    li_a.sort();
    print_list(li_a);

    std::list<int> li_b = {3, 4, 7, 8};

    li_a.merge(li_b);
    auto greater = [](int a, int b) { return a < b; };

    li_a.sort(greater);
    print_list(li_a);

    return 0;
};
