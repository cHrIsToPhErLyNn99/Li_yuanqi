#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    cout << "Enter 3 integers." << endl;
    cin >> a >> b >> c;

    cout << setprecision(2) << fixed;
    if( a>= b + c )
        cout << "Integers invalid." << endl;
        else if ( b >= a + c )
        cout << "Integers invalid." << endl;
        else if ( c >= a + b )
            cout << "Integers invalid." << endl;
        else
            cout << "The integers entered can construct a triangle." << endl;
}
