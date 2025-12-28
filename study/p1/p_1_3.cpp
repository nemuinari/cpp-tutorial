#include <iostream>

void expression_a(int a, int b, int c, int d, int e);
void expression_b(int a, int b, int c, int d, int e);
void expression_c();

void practice() {
    expression_a(10, 5, 2, 8, 4);
    expression_b(10, 5, 2, 8, 4);
    expression_c();
}

void expression_a(int a, int b, int c, int d, int e) {
    int answer = a + b - c * d / e;
    std::cout << answer << std::endl;
}

void expression_b(int a, int b, int c, int d, int e) {
    int answer = a + (b - c) * (d / e);
    std::cout << answer << std::endl;
}

void expression_c() {
    int i = 0;
    // i *= 2 + 4;
    i = i * (2 + 4);
    // i %= 3;
    i = i % 3;
    std::cout << i << std::endl;
}