#ifndef SPHERE_HPP
#define SPHERE_HPP

class Sphere {
private:
    int ndim;
    double radius;
public:
    Sphere(int ndim = 2, double radius = 1.0); // Constructor with default arguments
    int Ndim(); // Getter for ndim
    double Radius(); // Getter for radius
    void Ndim(int ndim); // Setter for ndim
    void Radius(double radius); // Setter for radius
    double Volume(); // Method to calculate volume
    void Print(); // Method to print details
};

#endif

