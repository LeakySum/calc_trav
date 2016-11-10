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

SCENARIO("calculator divis", "[divis]") {
   double a = 10;
    double b = 2;
    
    double rv = divis( a, b );
    
	REQUIRE( rv == 5);
}

SCENARIO("calculator mult", "[mult]") {
    double b = 10;
    double a = 2;
    
    
   double rv = mult( a, b );
    
	REQUIRE( rv == 20);
}

SCENARIO("calculator square", "[square]") {
   double a = 10;
    
    
    
    double rv = square( a );
    
	REQUIRE( rv == 3.16228);
}

SCENARIO("calculator power", "[power]") {
    double a = 10;
    double b = 2;
    
    
    double rv = power( a, b );
    
	REQUIRE( rv == 100);
}


