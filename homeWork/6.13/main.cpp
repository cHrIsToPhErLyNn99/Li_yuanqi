#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double roundToInteger(double);

int main()
{
    double a;
    double b;

    cout << fixed;

    cout << "Enter an integer:" << endl;
    cin >> a;

    b = roundToInteger(a);

    cout << setprecision(5) << a << "is rounded as:" << setprecision(1) << b << endl;
}

double roundToInteger(double a)
{
    return floor(a + 0.5);
}
