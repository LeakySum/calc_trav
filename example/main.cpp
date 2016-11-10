#include <iostream>
#include "calculator.hpp"
using namespace std;

int main() {
    float a, b;
    cout <<"Enter: a, b"<< endl;
    cin >> a >> b ;
    cout << "a+b=" << sum(a,b) << endl;
    cout << "a-b=" << sub(a,b) << endl;
    cout << "a/b=" << divis(a,b) << endl;
    cout << "a*b=" << mult(a,b) << endl;
    cout << "sqrt(a)=" << square(a) << endl;
    cout << "a^b=" << power (a,b) << endl;
    return 0;
}
