#include <iostream>
#include <string>

// Demonstrates usage of std::string methods: substr, data, c_str, and compare
int main() {
    std::string str = "abcdefg";
    std::string str2 = "hijklmn";

    std::string sub = str.substr(0);
    std::cout << "substr(0): " << sub << std::endl;

    sub = str.substr(2, 4);
    std::cout << "substr(2, 4): " << sub << std::endl;

    const char* str_data = str.data();
    const char* str_cstr = str.c_str();

    std::cout << "str.data(): " << str_data << std::endl;
    std::cout << "str.c_str(): " << str_cstr << std::endl;

    int ret = 0;
    ret = str.compare(str2);
    std::cout << "str.compare(str2): " << ret << std::endl;

    return 0;
}
