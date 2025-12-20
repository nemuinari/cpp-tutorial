#include <iostream>

class product {
    int price;

public:
    inline product() : price(0) {}
    inline product(int price);

    inline int get_price() const {
        return price;
    }
    inline void set_price(int price) {
        this->price = price;
    }
};

inline product::product(int price) : price(price) {}

void practice() {
    product p;
    p.set_price(123);

    std::cout << p.get_price() << std::endl;
}
