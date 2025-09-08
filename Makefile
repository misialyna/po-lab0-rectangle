CXX = g++
CXXFLAGS = -Wall --std=c++17

all: clean test

appTests: test.cpp rectangle.cpp catch_amalgamated.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

test: appTests
	# executes all tests
	./appTests

clean:
	rm -f appTests test_rectangle_smoke
