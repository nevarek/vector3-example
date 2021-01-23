#include "vec3.h"

int main() {
    Vec3 a(4, 2, 1);
    Vec3 b(2, 2, 1);

    Vec3 result = a.cross(b);

    result.print();
    return 0;
}
