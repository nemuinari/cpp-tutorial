#include <iostream>
#include <string>

/* primary template */
template <typename T>
void func(T str) {
    std::cout << "Primary template: " << str << std::endl;
}

/* explicit specialization */
template <>
void func<std::string>(std::string str) {
    std::cout << "Specialized template for std::string: " << str << std::endl;
}

void execute() {
    int val = 10;
    double pi = 3.14159;
    std::string str = "Hello, World!";

    /* primary template calls */
    func(val);                      // int
    func(pi);                       // double
    func("Hello, C-Style String!"); // const char*

    /* specialized template call */
    func(val); // int
    func(pi);  // double
    func(str); // std::string

    str = "HELLO, WORLD!";
    func("HELLO, C-STYLE STRING!"); // const char*
    func(str);                      // std::string
};
