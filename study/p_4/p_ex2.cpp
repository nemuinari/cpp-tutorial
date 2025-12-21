#include <iostream>

void featureX();
void featureY();
void featureZ();

namespace A {
    void featureX() {
        std::cout << "namespace A" << std::endl;
    }
    namespace B {
        void featureY() {
            std::cout << "namespace B" << std::endl;
        }
        namespace C {
            void featureZ() {
                std::cout << "namespace C" << std::endl;
            }
        }
    }
}

void practice() {
    A::B::C::featureZ();
}

