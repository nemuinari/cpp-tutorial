#include <iostream>
#include <vector>

/*
int型の配列を動的確保して、その確保したアドレスを返す allocate()関数を定義してください。なお、allocate()関数は引数として確保する配列の長さのみを受けとります。また、動的確保した配列のすべての要素を0で初期化してください。
*/

int* allocate(int length) {
    int* array = new int[length](); // 動的に配列を確保し、0で初期化
    return array;
}

void practice() {
    int length = 5;
    int* arr = allocate(length);

    std::cout << "Allocated array address: " << arr << std::endl;
    std::cout << "elements: " << *arr << std::endl;
    delete[] arr; // 動的に確保したメモリを解放
}
