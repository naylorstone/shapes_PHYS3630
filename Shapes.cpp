#include <iostream>
#include "Cube.hpp"
#include "Sphere.hpp"

int main() {
    int dimensions[] = {3, 5, 8};
    double length = 4.0;
    double radius = 4.0;

    for (int dim : dimensions) {
        Cube cube(dim, length);
        cube.Print();

        Sphere sphere(dim, radius);
        sphere.Print();
    }

    return 0;
}
