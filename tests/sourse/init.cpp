#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float a = 10;
    float b = 2;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 12);
}

SCENARIO("calculato sub ", "[sub]") {
    float a = 10;
   float b = 2;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == 8);
}

SCENARIO("calculator div", "[div]") {
   float a = 10;
    float b = 2;
    
    double rv = div( a, b );
    
	REQUIRE( rv == 5);
}



