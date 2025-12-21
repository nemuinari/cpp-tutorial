#include <iostream>

#define HOGE

void practice() {
#if defined(HOGE) 
    std::cout << "defined(HOGE) is TRUE" << std::endl;
#else
    std::cout << "defined(HOGE) is FALSE" << std::endl;
#endif
}
