#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
public:
    Complex( double = 1.0, double = 1.0 );
    Complex operator+( Complex & );
    Complex operator-( Complex & );
    Complex operator=( Complex & ) const;
    void print();

private:
    double realPart;
    double imagine;
};

#endif
