#include <iostream>

class Example {
    static int count;  // static クラスメンバーの宣言

public:
    static int increment();  // static メンバー関数の宣言
};

int Example::count = 0;  // static メンバーの初期化

int Example::increment() {  // static メンバー関数の定義
    count++;
    return count;
}

void practice() {
    Example e;

    for (int i = 0; i < 5; ++i) {
        std::cout << "count: " << e.increment()
                  << std::endl;  // static メンバー関数の呼び出し
    }
}