#include "Complex.h"
#include <iostream>
using namespace std;

ostream &operator<< ( ostream &output, Complex &c )
{
    output<< c.rp << "+" << c.ip << "*i" ;
    return output;
}

istream &operator>> ( istream &input, Complex &c )
{
    input>> c.rp >> c.ip;
    return input;
}

Complex::Complex( double r, double i )
:rp( r ), ip( i )
{

}

Complex::Complex operator+( Complex &c ) const
{
    Complex temp;
    temp.rp = *this.rp + c.rp;
    temp.ip = *this.ip + c.ip;
    return temp;
}

Complex::Complex operator-( Complex &c ) const
{
    Complex temp;
    temp.rp = *this.rp + c.rp;
    temp.ip = *this.ip + c.ip;
    return temp;
}

Complex::Complex operator*( Complex &r ) const
{
    Complex temp;
    temp.rp = *this.rp * r.rp;
    temp.ip = *this.ip * r.ip;
    return temp;
}

Complex::bool operator==( Complex &r )
{
    if( r.rp == *this.rp && r.ip == *this.ip )
        return true;
    else
        return false;
}

Complex::bool operator!=( Complex &r )
{
    return !( *this == r );
}

















