#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"
#include "rectangle.cpp"

// Smoke test: konstruktor + area/perimeter
TEST_CASE("Rectangle basics (area & perimeter)") {
    Rectangle r(10.0, 5.0);
    REQUIRE(r.getWidth() == Approx(10.0));
    REQUIRE(r.getHeight() == Approx(5.0));
    REQUIRE(r.area() == Approx(50.0));
    REQUIRE(r.perimeter() == Approx(30.0));
}
