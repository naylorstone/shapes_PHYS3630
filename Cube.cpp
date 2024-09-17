#include <iostream>
#include <cmath>
#include "Cube.hpp"

Cube::Cube(int ndim, double len) : ndim(ndim), len(len) {}

int Cube::Ndim() { return ndim; }
double Cube::Len() { return len; }

void Cube::Ndim(int ndim) { this->ndim = ndim; }
void Cube::Len(double len) { this->len = len; }

double Cube::Volume() {
    return std::pow(len, ndim);
}

void Cube::Print() {
    std::cout << "Dimensions: " << ndim << ", Length: " << len << ", Volume: " << Volume() << std::endl;
}
