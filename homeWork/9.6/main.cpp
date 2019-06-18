#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
    Rational r1( 3,4 );
    Rational r2( 1,2 );
    Rational r3;

    r1.print();
    r2.print();

    cout << "R1 + R2 = ";
    r3.copyRational(r1 + r2);
    r3.print();
    r3.printAsDouble();

    cout << "R1 - R2 = ";
    r3.copyRational(r1 - r2);
    r3.print();
    r3.printAsDouble();

    cout << "R1 * R2 = ";
    r3.copyRational(r1 + r2);
    r3.print();
    r3.printAsDouble();

    cout << "R1 / R2 = ";
    r3.copyRational(r1 + r2);
    r3.print();
    r3.printAsDouble();
}
