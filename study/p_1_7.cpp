#include <iostream>

void example1();
void example2();
void example3();

void practice() {
    example1();
    example2();
    example3();
}

// p.1.7.1
void example1() {
    int array[] = {4, 2, 1, 9, 5};

    std::cout << "example1" << std::endl;
    int len = sizeof(array) / sizeof(array[0]);  // arrayの配列の要素数
    while (len > 0) {
        std::cout << array[len - 1] << std::endl;
        len -= 1;
    }
}

// p.1.7.2
void example2() {
    int array[] = {4, 2, 1, 9, 5};

    std::cout << "example2" << std::endl;
    int len = sizeof(array) / sizeof(array[0]);  // arrayの配列の要素数
    for (len; len > 0; len--) {
        std::cout << array[len - 1] << std::endl;
    }
}

// p.1.7.3
void example3() {
    int array[] = {4, 2, 1, 9, 5};

    std::cout << "example3" << std::endl;
    int len = sizeof(array) / sizeof(array[0]);  // arrayの配列の要素数
    do {
        std::cout << array[len - 1] << std::endl;
        len--;
    } while (len > 0);
}
