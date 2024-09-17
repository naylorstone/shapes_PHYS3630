class Cube:
    def __init__(self, ndim=2, length=1.0):
        self._ndim = ndim
        self._length = length

    @property
    def ndim(self):
        return self._ndim

    @ndim.setter
    def ndim(self, value):
        self._ndim = value

    @property
    def length(self):
        return self._length

    @length.setter
    def length(self, value):
        self._length = value

    def volume(self):
        return self._length ** self._ndim

    def print_info(self):
        print(f"Dimensions: {self._ndim}, Length: {self._length}, Volume: {self.volume()}")

