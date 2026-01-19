#include <iostream>
#include <string>

// generic lambdas
class Base {
public:
    std::string type(int) {
        return "int";
    }

    std::string type(const char*) {
        return "const char*";
    }
};

int main() {
    Base base;
    auto lambda = [&base](auto value) {
        std::cout << "The type of the value is: " << base.type(value) << std::endl;
    };

    lambda(100);
    lambda("generic lambda");
}
