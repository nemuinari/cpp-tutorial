#include <iostream>
#include <string>

int main() {
    int a = 100;

    // integer to string
    std::string str = std::to_string(a);
    std::cout << "str = " << str << std::endl;

    str = "3.14159265";

    // string to float
    float f = std::stof(str);
    std::cout << "f = " << f << std::endl;
}
