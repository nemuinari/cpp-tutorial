#include <iostream>

class vector3d {
    int x, y, z;  // デフォルトで非公開のメンバー変数

public:
    int getter();
    void setter(int x, int y, int z = 0);
};

int vector3d::getter() {
    return x, y, z;
}

void vector3d::setter(int set_x, int set_y, int set_z) {
    x = set_x;
    y = set_y;
    z = set_z;
}

void set(vector3d* ptr, int& vx, int& vy, int& vz) {
    // 渡された値を+1して設定し、参照引数を更新
    vx++;
    vy++;
    vz++;
    ptr->setter(vx, vy, vz);
}

void practice() {
    vector3d v;
    int set_x, set_y, set_z;

    std::cout << "please set value: ";
    std::cin >> set_x >> set_y >> set_z;

    v.setter(set_x, set_y, set_z);
    vector3d* ptr = &v;

    set(ptr, set_x, set_y, set_z);
    std::cout << "value: x=" << set_x << " y=" << set_y << " z=" << set_z
              << std::endl;
}