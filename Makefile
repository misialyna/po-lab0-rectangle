CXX = g++
CXXFLAGS = -Wall --std=c++17

all: clean test

appTests: test.cpp rectangle.cpp catch_amalgamated.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

test: appTests
	# executes all tests
	./appTests

# smoke test – sprawdza prosty przypadek
test_rectangle_smoke: test_rectangle_smoke.cpp rectangle.cpp catch_amalgamated.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@

clean:
	rm -f appTests test_rectangle_smoke
