#include <iostream>

class Base {
public:
    Base() {
        throw 0;
    }
};

int main() {
    try {
        Base* ptr = new Base;
        delete ptr;
    } catch (int e) {
        std::cout << "Caught an exception with value: " << e << std::endl;
    } catch (float e) {
        std::cout << "Caught a float exception with value: " << e << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception." << std::endl;
    }

    return 0;
}
