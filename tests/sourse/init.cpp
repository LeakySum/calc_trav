#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    double a = 10;
    double b = 2;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 12);
}

SCENARIO("calculato subtraction ", "[subtraction]") {
    double a = 10;
   double b = 2;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 8);
}

SCENARIO("calculator division", "[division]") {
   double a = 10;
    double b = 2;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 5);
}

SCENARIO("calculator multyplication", "[multyplication]") {
    double b = 10;
    double a = 2;
    
    
   double rv = sum( a, b );
    
	REQUIRE( rv == 20);
}

SCENARIO("calculator square", "[square]") {
   double a = 10;
    
    
    
    double rv = square( a );
    
	REQUIRE( rv == 3.16228);
}

SCENARIO("calculator power", "[power]") {
    double a = 10;
    unsigned int b = 2;
    
    
    double rv = power( a, b );
    
	REQUIRE( rv == 100);
}

SCENARIO("calculator power", "[power]") {
    double a = 10;
    unsigned int b = 0;
    
    
    double rv = power( a, b );
    
	REQUIRE( rv == 1);
}

