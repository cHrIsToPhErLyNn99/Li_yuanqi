#include <iostream>
using namespace std;

double minimum( double, double, double );

int main()
{
    double a;
    double b;
    double c;

    cout << "Enter 3 integers:";
    cin >> a >> b >> c;

    cout << minimum( a,b,c );
}


double minimum ( double a, double b, double c )
{
    double minimumInteger = a;

    if ( b < minimumInteger )
        minimumInteger = b;
    if ( c < minimumInteger )
        minimumInteger = c;

    return minimumInteger;
}
