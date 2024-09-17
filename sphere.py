import math

class Sphere:
    def __init__(self, ndim=2, radius=1.0):
        self._ndim = ndim
        self._radius = radius

    @property
    def ndim(self):
        return self._ndim

    @ndim.setter
    def ndim(self, value):
        self._ndim = value

    @property
    def radius(self):
        return self._radius

    @radius.setter
    def radius(self, value):
        self._radius = value

    def volume(self):
        return (self._radius ** self._ndim) * (2 * math.pi / 2) ** (self._ndim / 2) / math.gamma(self._ndim / 2 + 1)

    def print_info(self):
        print(f"Dimensions: {self._ndim}, Radius: {self._radius}, Volume: {self.volume()}")

