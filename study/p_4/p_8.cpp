#include <iostream>

void foo() {
    std::cout << " --global-- " << std::endl;
}

namespace module {
    void foo() {
        std::cout << " --namespace-- " << std::endl;
    }
}
void practice() {
    namespace m = module;
    m::foo();
    foo();
}
