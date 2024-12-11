# Compiler and Flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

# Directories
SRC_DIR = src
INCLUDE_DIR = include

# Files
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = Bank

# Rules
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

.PHONY: all clean run
