#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::string, float> t(100, "text", 3.14f);
    std::cout << "Tuple elements: " << std::get<0>(t) << ", " << std::get<1>(t) << ", "
              << std::get<2>(t) << std::endl;

    auto& [x, y, z] = t;
    y = "text_updated";
    std::cout << "Structured bindings: " << x << ", " << y << ", " << z << std::endl;

    return 0;
}
