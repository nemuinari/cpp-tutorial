#include <iostream>

class Base {
  int i;

public:
  Base(int i) : i(i) {
    std::cout << "コンストラクタ実行 value: " << i << std::endl;
  }

  ~Base() {
    std::cout << "デストラクタ実行 value: " << i << std::endl;
  }

  void hello() {
    std::cout << "hello value: " << i << std::endl;
  }
};

void practice() {
  std::cout << "--- practice関数 開始---" << std::endl;

  Base* b_ptr = new Base(10);
  b_ptr->hello(); // -> ポインタに対して使う（*b_ptr).hello();

  delete b_ptr;
  std::cout << "--- practice関数 終了---" << std::endl;
};
