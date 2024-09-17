from cube import Cube
from sphere import Sphere

def main():
    dimensions = [3, 5, 8]
    length = 4.0
    radius = 4.0

    for dim in dimensions:
        cube = Cube(ndim=dim, length=length)
        cube.print_info()

        sphere = Sphere(ndim=dim, radius=radius)
        sphere.print_info()

if __name__ == "__main__":
    main()
