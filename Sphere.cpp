#include <iostream>
#include <cmath>
#include "Sphere.h"

Sphere::Sphere(int ndim, double radius) : ndim(ndim), radius(radius) {}

int Sphere::Ndim() { return ndim; }
double Sphere::Radius() { return radius; }

void Sphere::Ndim(int ndim) { this->ndim = ndim; }
void Sphere::Radius(double radius) { this->radius = radius; }

double Sphere::Volume() {
  return std::pow(radius, ndim) * std::pow(M_PI, ndim / 2.0) / std::tgamma(ndim / 2.0 +1);
}
  
void Sphere::Print() {
    std::cout << "Dimensions: " << ndim << ", Radius: " << radius << ", Volume: " << Volume() << std::endl;
}
