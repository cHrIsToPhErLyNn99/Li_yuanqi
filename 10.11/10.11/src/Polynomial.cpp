#include "Polynomial.h"
#include <iostream>
#include <iomanip>
using namespace std;
Polynomial::Polynomial( int arraySize )
:   int size = arraySize;
    int *ptr = new int [ size ]
{
    for( unsigned int i = 0; i <= size; i++ )
        ptr[i] = 0;
}

Polynomial::~Polynomial()
{
    delete [] ptr;
}

Polynomial Polynomial::operator+( Polynomial & r )
{
    Polynomial temp;
    int largest = ( size > r.size ? size : r.size );
    for( unsigned int i = 0; i <= largest; i++ )
        temp.ptr[i] = ptr[i] + r.ptr[i];
    return temp;
}

Polynomial Polynomial::operator-( Polynomial & r )
{
    Polynomial temp;
    int largest = ( size > r.size ? size : r.size );
    for( unsigned int i = 0; i <= largest; i++ )
        temp.ptr[i] = ptr[i] - r.ptr[i];
    return temp;
}

Polynomial Polynomial::&operator=( Polynomial & r )
{
    delete [] ptr;
    int *ptr = new int ptr[ r.size ];
    for( unsigned int i = 0; i <= r.size; i++ )
        ptr[i] = r.ptr[i];
    return *this;
}

Polynomial Polynomial::operator+=( Polynomial & r )
{
    Polynomial temp;
    temp.ptr[i] = ptr[i] + r.ptr[i];
    return temp;
}

ostream &operator<<( ostream & output, Polynomial & p )
{
    for( unsigned int i = 0; i <= p.size; i++ )
        {
            output << p.ptr[i] << "x^" << i << setw(8);
            if( p.size % 4 == 0 )
            output << "\n";
        }
    return output;
}

istream &operator>>( istream & input, Polynomial & p )
{
    for( unsigned int i = 0; i <= p.size; i++ )
        input >> p.ptr[i];
    return input;
}
