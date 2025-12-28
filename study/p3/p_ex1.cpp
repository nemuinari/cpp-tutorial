#include <iostream>

class A {
public:
    A(const A& other);
};

A::A(const A& other) {
}

void practice() {
    // A a;  // エラー: デフォルトコンストラクタが存在しない
    A a(a);  // OK: コピーコンストラクタは利用可能
}