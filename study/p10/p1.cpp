#include <iostream>

// exception handling using try, catch and throw
void throw_zero() {
    throw 0;
}

int main() {
    try {
        throw_zero();
    } catch (int e) {
        std::cout << "Caught an exception with value: " << e << std::endl;
    } catch (float e) {
        std::cout << "Caught a float exception with value: " << e << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception." << std::endl;
    }

    return 0;
}
