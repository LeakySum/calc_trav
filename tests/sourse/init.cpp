#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    double x = 10;
    double y = 2;
    
    double sm = sum ( x, y);
    double sb = subtraction ( x, y);
    double dv = divison ( x, y);
    double mp = multiplication ( x, y);
    double sq = square ( x);
    double p =  power ( x, y);
    
    REQUIRE( sm == 12, sb == 8, dv == 5, mp == 20, sq == 3,16228, p == 100 );
}
  
