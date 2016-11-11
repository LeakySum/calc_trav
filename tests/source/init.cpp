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

SCENARIO("calculator mult", "[mult]") {
float b = 10;
float a = 2;


double rv = mult( a, b );

REQUIRE( rv == 20);
}

SCENARIO("calculator sq", "[sq]") {
float a = 10;



double rv = square( a );

REQUIRE( rv == 3.16228);
}

SCENARIO("calculator pow", "[pow]") {
float a = 10;
float b = 2;


double rv = pow( a, b );

REQUIRE( rv == 100);
}


