#include <iostream>

// NSDMI:
class vector3d {
    float x = 1.41f;
    float y = 3.38f;
    float z = 12.2f;

public:
    vector3d() = default;
    float get_x() const;
    float get_y() const;
    float get_z() const;
};

float vector3d::get_x() const {
    return x;
}

float vector3d::get_y() const {
    return y;
}

float vector3d::get_z() const {
    return z;
}

void practice() {
    vector3d v;

    std::cout << "x: " << v.get_x() << std::endl;
    std::cout << "y: " << v.get_y() << std::endl;
    std::cout << "z: " << v.get_z() << std::endl;
}