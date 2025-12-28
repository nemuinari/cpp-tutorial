#include <iostream>

// インライン関数
inline int i() {
    std::cout << " -- inline -- " << std::endl;
}

void practice() {
    i();
}
