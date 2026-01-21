#include <iostream>
#include <typeinfo>

class Base {};

class Derived_A : public Base {};

class Derived_B : public Base {};

int main() {
    Derived_A objA;
    Derived_B objB;

    Base* basePtrA = &objA;
    Base* basePtrB = &objB;

    if (typeid(*basePtrA) == typeid(*basePtrB)) {
        std::cout << "Same type" << std::endl;
    } else {
        std::cout << "Different types" << std::endl;
    }

    return 0;
}

/*
void compareLambdas() {
    auto lambda1 = [](int a) { return a * a; };
    auto lambda2 = [](int a) { return a + a; };  // 定義が違う
    auto lambda3 = [](int a) { return a * a; };  // lambda1と全く同じ定義

    // lambda1 vs lambda2
    if (typeid(lambda1) == typeid(lambda2)) {
        std::cout << "1 and 2: Same type" << std::endl;
    } else {
        std::cout << "1 and 2: Different types" << std::endl;
    }

    if (typeid(lambda1) == typeid(lambda3)) {
        std::cout << "1 and 3: Same type" << std::endl;
    } else {
        std::cout << "1 and 3: Different types" << std::endl;
    }
}

int main() {
    compareLambdas();

    return 0;
}
*/
