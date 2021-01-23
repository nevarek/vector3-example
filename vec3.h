#ifndef VEC3_H
#define VEC3_H

class Vec3 {
    int x;
    int y;
    int z;

    public:
        Vec3();
        Vec3(int x, int y, int z);
        Vec3 cross(Vec3 v2);

        void print();
};

#endif
