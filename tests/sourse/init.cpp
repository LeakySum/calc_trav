#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    double a = 10;
    double b = 2;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 12);
}

SCENARIO("calculato sub ", "[sub]") {
    double a = 10;
   double b = 2;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == 8);
}

SCENARIO("calculator div", "[div]") {
   double a = 10;
    double b = 2;
    
    double rv = div( a, b );
    
	REQUIRE( rv == 5);
}

SCENARIO("calculator mult", "[mult]") {
    double b = 10;
    double a = 2;
    
    
   double rv = mult( a, b );
    
	REQUIRE( rv == 20);
}

SCENARIO("calculator sq", "[sq]") {
   double a = 10;
    
    
    
    double rv = square( a );
    
	REQUIRE( rv == 3.16228);
}

SCENARIO("calculator pow", "[pow]") {
    double a = 10;
    double b = 2;
    
    
    double rv = pow( a, b );
    
	REQUIRE( rv == 100);
}


