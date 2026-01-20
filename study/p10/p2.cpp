#include <iostream>

void foo() noexcept {
    throw 0;
}

int main() {
    try {
        foo();
    } catch (int e) {
        std::cout << "Caught an exception with value: " << e << std::endl;
    } catch (float e) {
        std::cout << "Caught a float exception with value: " << e << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception." << std::endl;
    }

    return 0;
}
