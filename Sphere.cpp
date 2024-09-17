#include <iostream>
#include <cmath>
#include "Sphere.hpp" // Include the updated header file

// Constructor definition
Sphere::Sphere(int ndim, double radius) : ndim(ndim), radius(radius) {}

// Getter for ndim
int Sphere::Ndim() { return ndim; }

// Getter for radius
double Sphere::Radius() { return radius; }

// Setter for ndim
void Sphere::Ndim(int ndim) { this->ndim = ndim; }

// Setter for radius
void Sphere::Radius(double radius) { this->radius = radius; }

// Calculate the volume of the n-dimensional sphere
double Sphere::Volume() {
    // Volume formula: (π^(n/2) * R^n) / Γ(n/2 + 1)
    // Note: std::tgamma is used to calculate the Gamma function
    return std::pow(radius, ndim) * std::pow(M_PI, ndim / 2.0) / std::tgamma(ndim / 2.0 + 1);
}

// Print details about the sphere
void Sphere::Print() {
    std::cout << "Dimensions: " << ndim << ", Radius: " << radius << ", Volume: " << Volume() << std::endl;
}
