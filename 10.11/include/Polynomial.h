#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H


#include <iostream>

class Polynomial
{
    friend std::ostream &operator<<( std::output &, const Polynomial & );
    friend std::istream &operator>>( std::input &, Polynomial & );

public:
    Polynomial operator+(const Polynomial&);
    Polynomial operator-(const Polynomial&);
    Polynomial operator*(const Polynomial&);
private:
    int degree;
    int *coeff;
};


#endif
