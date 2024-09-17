#include <iostream>
#include <cmath>
#include "Sphere.h"

Sphere::Sphere(int ndim, double radius) : ndim(ndim), radius(radius) {}

int Sphere::Ndim() { return ndim; }
double Sphere::Radius() { return radius; }

void Sphere::Ndim(int ndim) { this->ndim = ndim; }
void Sphere::Radius(double radius) { this->radius = radius; }

double Sphere::Volume() {
    double volume = std::pow(radius, ndim) * std::pow(2.0 * M_PI / 2.0, ndim / 2.0) / tgamma(ndim / 2.0 + 1);
    return volume;
}

void Sphere::Print() {
    std::cout << "Dimensions: " << ndim << ", Radius: " << radius << ", Volume: " << Volume() << std::endl;
}
