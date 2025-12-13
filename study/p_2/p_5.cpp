#include <iostream>
#include <string>

void example1() {
    int a;
    std::cout << "Please number a: ";
    std::cin >> a;
    std::cout << a << std::endl;
}

void example2() {
    std::string str;
    std::cout << "Please input a string: ";
    std::cin >> str;
    std::cout << str << std::endl;
}

void example3() {
    std::cin.ignore();  // cinのバッファをクリアする
    std::string str;
    do {
        std::cout << "Please input a string: ";
        std::getline(std::cin, str);

        std::cout << str << std::endl;
        if (str == "") {
            break;
        }
    } while (true);
}

void practice() {
    example1();
    example2();
    example3();
}