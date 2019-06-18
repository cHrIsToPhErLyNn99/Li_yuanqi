#include "Ractangle.h"
#include <iostream>
using namespace std;

Ractangle::Ractangle( double l, double w )
{
    setLength( l );
    setWidth( w );
}

void Ractangle::setLength( double l )
{
    length = ( l >= 0.0 && l <= 20.0 ? l : 0.0 );
}

double Ractangle::getLength() const
{
    return length;
}

void Ractangle::setWidth( double w )
{
    width = ( w >= 0.0 && w <= 20.0 ? w : 0.0 );
}

double Ractangle::getWidth() const
{
    return width;
}

double Ractangle::perimeter( double l, double w )
{
    return 2 * ( l + w );
}

double Ractangle::perimeter( double l, double w )
{
    return l * w;
}

ostream &operator<<( ostream &output, Ractangle &r )
{
    output << "Length :" << r.length << "\nWidth: " << r.width << "\n Perimeter: " << r.perimeter() << "\nArea: " << r.area() << endl;
}
