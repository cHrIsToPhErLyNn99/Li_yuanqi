#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex c1( 1.0, 1.0 );
    Complex c2( 2.0, 2.0 );
    Complex c3;

    c3 = c1 + c2;
    cout << c3;

    c3 = c1 - c2;
    cout << c3;

    c3 = c1 * c2;
    cout << c3;

    cout << (c1 == c2 ? "Equal" : "Not Equal");
}
