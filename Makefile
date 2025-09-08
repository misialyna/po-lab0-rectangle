all: clean test

appTests: test.cpp rectangle.cpp
	g++ -Wall --std=c++17 test.cpp catch_amalgamated.cpp -o appTests

test: appTests
	# executes all tests
	./appTests

clean:
	rm -f appTests