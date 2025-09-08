all: test

test: test.cpp rectangle.cpp catch_amalgamated.cpp
	$(CXX) -std=c++17 -Wall -o test test.cpp rectangle.cpp catch_amalgamated.cpp
	./test

clean:
	rm -f test