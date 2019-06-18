#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex c1( 1.1, 2.2 );
    Complex c2;
    Complex c3;

    c1.print();
    c2.print();

    cout << "c1 + c2 = ";
    c3 = c1 + c2;
    c3.print();

    cout << "c1 - c2 = ";
    c3 = c1 - c2;
    c3.print();
}
