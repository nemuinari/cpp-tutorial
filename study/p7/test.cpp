#include <iostream>

class Sample
{
    int a;
    int b;

public:
    void example(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};

void practice()
{
    int a = 10;
    int b = 20;

    Sample s;
    s.example(&a, &b);

    std::cout << "a: " << a << ", b: " << b << std::endl;
}