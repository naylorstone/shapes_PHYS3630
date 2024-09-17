class Cube{
private:
  int ndim;
  double len;
public:
  Cube(int ndim=2; double len=1.0);  // constructor
  int Ndim();                        // getters
  double Len();
  void Ndim(int ndim);               // setters
  void Len(double len);
  double Volume();                   // return volume of the n-dimensional cube
  void Print();                      // prints ndim, len, and Volume() on one line
};
