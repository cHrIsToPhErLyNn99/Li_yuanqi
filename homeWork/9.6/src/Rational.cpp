#include "Rational.h"
#include <iostream>
#include <iomanip>
using namespace std;

Rational::Rational( int a, int b )
{
    fz = a;
    fm = b;
}

Rational Rational::copyRational( const Rational & r )
{
    Rational temp;
    temp.fm = r.fm;
    temp.fz = r.fz;
    return temp;
}

Rational Rational::operator+( Rational & r )
{
    Rational temp;
    temp.fz = fz * r.fm + r.fz * fm;
    temp.fm = fm * r.fm;
    temp.simplified();
    return temp;
}

Rational Rational::operator-( Rational & r )
{
    Rational temp;
    temp.fz = fz * r.fm - r.fz * fm;
    temp.fm = fm * r.fm;
    temp.simplified();
    return temp;
}

Rational Rational::operator*( Rational & r )
{
    Rational temp;
    temp.fz = fz * r.fz;
    temp.fm = fm * r.fm;
    temp.simplified();
    return temp;
}

Rational Rational::operator/( Rational & r )
{
    Rational temp;
    temp.fz = fz * r.fm;
    temp.fm = fm * r.fz;
    temp.simplified();
    return temp;
}

void Rational::simplified()
{
    int largest;
    largest = ( fz < fm ? fm : fz );
    int zdgys;
    for( unsigned int i = 0; i <= largest; i++ )
    {
        if( fz % i == 0 && fm % i == 0 )
            zdgys = i;
    }
    fm /= zdgys;
    fz /= zdgys;
}

void Rational::print()
{
    cout << fz << "/" << fm << endl;
}

void Rational::printAsDouble()
{
    cout << setw(2) << setprecision(1) << static_cast < double > (fz)/(fm) << endl;
}
