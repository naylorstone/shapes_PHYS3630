class Sphere{
private:
int ndim;
  double radius;
public:
  Cube(int ndim=2; double radius=1.0); // constructor
  int Ndim();                          // getters
  double Radius();
  void Ndim(int ndim);                 // setters
  void Radius(double radius);
  double Volume();                     // return volume of the n-dimensional sphere
  void Print();                        // prints ndim, radius, and Volume() on one line
};
