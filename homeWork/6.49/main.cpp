#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double pi = 3.14;

inline  double circleArea(int r)
{
    return pow(r,2) * pi;
}

int main()
{
    int r;
    cout << "Enter an integer:";
    cin >> r;

    cout << fixed << setprecision(2) << circleArea(r);
}
