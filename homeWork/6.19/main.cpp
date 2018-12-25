#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse(double,double);

int main()
{
    double a;
    double b;
    double c;

    cout << fixed;

    cout << "输入两条直角边的边长：" << endl;
    cin >> a >> b;

    c = hypotenuse(a,b);

    cout << "斜边长为：" << setprecision(1) << c << endl;
}

double hypotenuse(double a, double b)
{
    double x;
    double y;

    x = pow(a,2) + pow(b,2);
    y = pow(x,0.5);

    return y;
}
