#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "rectangle.cpp"

TEST_CASE("Rectangle constructor initializes width and height", "[constructor]") {
    Rectangle rect(10.0, 5.0);
    REQUIRE(rect.getWidth() == 10.0);
    REQUIRE(rect.getHeight() == 5.0);
}

TEST_CASE("Rectangle setWidth method sets the width", "[setWidth]") {
    Rectangle rect(10.0, 5.0);
    rect.setWidth(15.0);
    REQUIRE(rect.getWidth() == 15.0);
}

TEST_CASE("Rectangle setHeight method sets the height", "[setHeight]") {
    Rectangle rect(10.0, 5.0);
    rect.setHeight(8.0);
    REQUIRE(rect.getHeight() == 8.0);
}

TEST_CASE("Rectangle getWidth method returns the width", "[getWidth]") {
    Rectangle rect(10.0, 5.0);
    REQUIRE(rect.getWidth() == 10.0);
}

TEST_CASE("Rectangle getHeight method returns the height", "[getHeight]") {
    Rectangle rect(10.0, 5.0);
    REQUIRE(rect.getHeight() == 5.0);
}

TEST_CASE("Rectangle area method calculates the area", "[area]") {
    Rectangle rect(10.0, 5.0);
    REQUIRE(rect.area() == 50.0);
}

TEST_CASE("Rectangle perimeter method calculates the perimeter", "[perimeter]") {
    Rectangle rect(10.0, 5.0);
    REQUIRE(rect.perimeter() == 30.0);
}

TEST_CASE("Rectangle display method does not throw an exception", "[display]") {
    Rectangle rect(10.0, 5.0);
    REQUIRE_NOTHROW(rect.display());
}
