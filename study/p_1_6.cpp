#include <iostream>

void array_example();
void string_example();
void string_example2();

void practice() {
    array_example();
    string_example();
    string_example2();
}

// p.1.6.1
void array_example() {
    int array[] = {4, 2, 1, 9, 5};

    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
}

// p.1.6.2
void string_example() {
    char string[] = "Null Character!!\0";
    std::cout << string << std::endl;
}

// p.1.6.3
void string_example2() {
    std::string example = "Null Character!!\0";
    std::cout << example << std::endl;
}