#include <iostream>
#include "calculator.hpp"
using namespace std;

int main() {
float a, b;
cin >> a >> b ;
cout << "a+b=" << sum(a,b) << endl;
cout << "a-b=" << sub(a,b) << endl;
cout << "a/b=" << div(a,b) << endl;
cout << "a*b=" << mult(a,b) << endl;
cout << "sqrt(a)=" << sq(a) << endl;
cout << "a^b=" << powe (a,b) << endl;
return 0;
}
