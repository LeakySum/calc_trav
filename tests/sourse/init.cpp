#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    double x = 10;
    double y = 2;
    
    double rv = sum ( x, y);
    
    REQUIRE( rv == 7);
}
  
