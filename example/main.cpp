#include <iostream>
#include "calculator.hpp"
using namespace std;

int main() {
    double a, b;
    cout <<"Enter: a, b"<< endl;
    cin >> a >> b ;
    cout << "a+b=" << sum(a,b) << endl;
    cout << "a-b=" << sub(a,b) << endl;
    cout << "a/b=" << div(a,b) << endl;
    cout << "a*b=" << mult(a,b) << endl;
    cout << "sqrt(a)=" << sq(a) << endl;
    cout << "a^b=" << pow (a,b) << endl;
    return 0;
}
