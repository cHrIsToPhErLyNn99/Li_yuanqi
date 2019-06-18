#ifndef RATIONAL_H
#define RATIONAL_H


class Rational
{
public:
    Rational( int = 1, int = 1 );
    Rational copyRational( const Rational & );
    Rational operator+( Rational & );
    Rational operator-( Rational & );
    Rational operator*( Rational & );
    Rational operator/( Rational & );
    void simplified();
    void print();
    void printAsDouble();
private:
    int fz;
    int fm;
};

#endif
