#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double distance(double,double);

int main()
{
    double a;
    double b;

    cout << "Enter 2 digitals.\n";
    cin >> a >> b;

    cout << "\n" << fixed <<setprecision(1) << distance(a,b);
}

double distance(double a,double b)
{
    double c = pow(a,2);
    double d = pow(b,2);
    double e = sqrt(c+d);

    return e;
}
