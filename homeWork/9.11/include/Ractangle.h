#ifndef RACTANGLE_H
#define RACTANGLE_H


class Ractangle
{
    friend ostream &operator<<( ostream &, Ractangle & );
public:
    Ractangle( double = 1.0, double = 1.0 );
    void setLength( double );
    void setWidth( double );
    double getLength() const;
    double getWidth() const;
    double perimeter( double, double );
    double area( double, double );
private:
    double length;
    double width;
};

#endif
