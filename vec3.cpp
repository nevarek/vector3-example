#include "vec3.h"
#include <iostream>

Vec3::Vec3() {
    x = 0;
    y = 0;
    z = 0;
}

Vec3::Vec3(int p_x, int p_y, int p_z) {
    x = p_x;
    y = p_y;
    z = p_z;
}

Vec3 Vec3::cross(Vec3 v2) {
    Vec3 result;

    result.x = y * v2.z - z * v2.y;
    result.y = z * v2.x - x * v2.z;
    result.z = x * v2.y - y * v2.x;

    return result;
}

void Vec3::print() {
    std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
}
