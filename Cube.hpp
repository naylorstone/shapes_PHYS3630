#ifndef CUBE_HPP
#define CUBE_HPP

class Cube {
private:
    int ndim;
    double len;
public:
    Cube(int ndim = 2, double len = 1.0); // Constructor with default arguments
    int Ndim(); // Getter for ndim
    double Len(); // Getter for len
    void Ndim(int ndim); // Setter for ndim
    void Len(double len); // Setter for len
    double Volume(); // Method to calculate volume
    void Print(); // Method to print details
};

#endif
