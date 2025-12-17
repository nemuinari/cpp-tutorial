#include <iostream>

class vector3d {
    float x = 3.14f;
    float y = 2.71f;
    float z = 0.1f;

public:
    vector3d();
    vector3d(float x, float y);
    vector3d(float x, float y, float z);

    void set_values(float x, float y, float z);
    float get_x() const;
    float get_y() const;
    float get_z() const;
};

vector3d::vector3d() {
}

vector3d::vector3d(float _x, float _y) : x(_x), y(_y) {
}

vector3d::vector3d(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {
}

class Derived : public vector3d {
public:
    using vector3d::vector3d;
};

void vector3d::set_values(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

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
    v.set_values(v.get_x(), v.get_y(), v.get_z());

    std::cout << "Base class:" << std::endl;
    std::cout << "x: " << v.get_x() << std::endl;
    std::cout << "y: " << v.get_y() << std::endl;
    std::cout << "z: " << v.get_z() << std::endl;

    Derived d;
    d.set_values(d.get_x(), d.get_y(), d.get_z());

    std::cout << "Derived class:" << std::endl;
    std::cout << "x: " << d.get_x() << std::endl;
    std::cout << "y: " << d.get_y() << std::endl;
    std::cout << "z: " << d.get_z() << std::endl;
}