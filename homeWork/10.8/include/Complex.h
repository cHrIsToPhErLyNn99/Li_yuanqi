#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    friend ostream &operator<< ( std ostream &, Complex & );
    friend istream &operator>> ( std istream &, Complex & );
public:
    complex( double = 0.0, double = 0.0 );
    operator+( Complex & );
    operator-( Complex & );
    operator*( Complex & );
    bool operator==( Complex & );
    bool operator!=( Complex & );
private:
    double rp; // Êµ²¿
    double ip; // Ðé²¿
};
