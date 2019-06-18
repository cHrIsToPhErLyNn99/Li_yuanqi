#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H


class Polynomial
{
    friend ostream &operator<<( ostream &, Polynomial & );
    friend istream &operator>>( istream &, Polynomial & );
public:
    Polynomial ( int = 10 );
    ~Polynomial();
    Polynomial operator+( Polynomial & );
    Polynomial operator-( Polynomial & );
    Polynomial &operator=( Polynomial & );
    Polynomial operator+=( Polynomial & );
private:
    int size;
    int *ptr;
};

#endif
