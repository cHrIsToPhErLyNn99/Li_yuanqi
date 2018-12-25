#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);

int main()
{
    double a;
    double x;
    double y;
    double z;

    cout << fixed;

    cout << "Enter an integer:" << endl;
    cin >> a;

    x = roundToInteger(a);
    y = roundToTenths(a);
    z = roundToHundredths(a);

    cout << setprecision(4) << a << "rounded is\n" <<setprecision(1) <<x << "\n"
         << setprecision(2) << y << " \n" << setprecision(3) << z << endl;
}

double roundToInteger(double a)
{
    return floor(a + 0.5);
}

double roundToTenths(double a)
{
    return floor(a * 10 + 0.5) / 10;
}

double roundToHundredths(double a)
{
    return floor(a * 100 + 0.5) / 100;
}
