#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

// 整数を８進数８桁、右詰めで重填文字にはーを使って表示する
void print_octal(int num) {
    cout << "num = " << num << endl;

    // cout << oct << setw(8) << right << setfill('-') << num << endl;
    cout.setf(ios::oct, ios::basefield);     // ８進数表示に設定
    cout.width(8);                           // 表示幅を８に設定
    cout.setf(ios::right, ios::adjustfield); // 右詰めに設定
    cout.fill('-');                          // 重填文字にーを設定

    cout << num << endl;
}

void practice() {
    int num = 1234;

    print_octal(num);
}

// std::cout << 3.14159 << std::endl;
// std::cout.setf(std::ios::scientific);
// 円周率を科学技術表記で表示するプログラム
/*
void pi_scientific(float pi) {
    cout << pi << endl;

    cout.setf(ios::scientific);
    cout << pi << endl;
}

void practice() {
    float pi = M_PI;

    pi_scientific(pi);
}
*/
