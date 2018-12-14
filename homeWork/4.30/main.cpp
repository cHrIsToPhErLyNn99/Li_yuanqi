#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r = 0.00000;
    double d = 0.00000;
    double s = 0.00000;
    double c = 0.00000;

    cout << "Enter an integer to define r :" << endl;
    cin >> r;

    c = 2 * 3.14159 * r;
    d = 2 * r;
    s = 3.14159 * r * r;

    cout << setprecision (5) << fixed;

    cout << "c = " << c << "\ns = " << s << "\nd = " << d << endl;
}
