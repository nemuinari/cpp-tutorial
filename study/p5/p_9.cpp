#include <iostream>

class Example {
    int i;

public:
    Example(int i)
      : i(i){};

    void exampleA(int i) {
        std::cout << "This is Example A: " << i << std::endl;
    }

    int exampleB(int i) {
        return i;
    }

    int exampleC(int i) {
        return i * i;
    }
};

void practice() {
    Example e(0);

    e.exampleA(3);

    std::cout << "Example B returned: " << e.exampleB(5) << std::endl;
    std::cout << "Example C returned: " << e.exampleC(4) << std::endl;

    /*
    int (*ptrB)(int) = &exampleB;
    std::cout << "Example B returned: " << ptrB(5) << std::endl;

    int (*ptrC)(int) = &exampleC;
    std::cout << "Example C returned: " << ptrC(4) << std::endl;
    */
}
