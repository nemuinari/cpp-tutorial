#include <iostream>
#include <array>
#include <string>
#include <tuple>

int main() {
    std::tuple<std::string, int, std::string> person{"Alice", 30, "Engineer"};

    std::string name;
    int age;
    std::string country;

    std::tie(name, age, country) = person;
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Country: " << country << "\n";
    return 0;
}