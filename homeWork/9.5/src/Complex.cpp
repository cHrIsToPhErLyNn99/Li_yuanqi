#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex( double r, double i )
{
    realPart = r;
    imagine = i;
}

Complex Complex::operator+( Complex & r )
{
    Complex temp;
    temp.realPart = realPart + r.realPart;
    temp.imagine = imagine + r.imagine;
    return temp;
}

Complex Complex::operator-( Complex & r )
{
    Complex temp;
    temp.realPart = realPart - r.realPart;
    temp.imagine = imagine - r.imagine;
    return temp;
}

Complex Complex::operator=( Complex & r ) const
{
    Complex temp;
    temp.realPart = r.realPart;
    temp.imagine = r.imagine;
    return temp;
}

void Complex::print()
{
    cout << "(" << realPart << "," << imagine << ")" << endl;
}
