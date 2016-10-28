#include <iostream>
#include "calculator.hpp"
using namespace std;

int main() {
    double a, b;
    cout <<"Enter: a, b"<< endl;
    cin >> a >> b ;
    cout << "a+b=" << sum(a,b) << endl;
    cout << "a-b=" << subtraction(a,b) << endl;
    cout << "a/b=" << division(a,b) << endl;
    cout << "a*b=" << multyplication(a,b) << endl;
    cout << "sqrt(a)=" << square(a) << endl;
    cout << "a^b=" << power (a,b) << endl;
    return 0;
}
