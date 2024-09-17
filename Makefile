

CXX = g++

# Define compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra

# Define the target executable
TARGET = shapes

# Define the source files
SRCS = Cube.cpp Sphere.cpp Shapes.cpp

# Define the object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up generated files
clean:
	rm -f $(TARGET) $(OBJS)
