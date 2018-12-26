#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int pfg(int);
int ncf(int);
double sinX(int);
double cosX(int);
double tanX(int);
double zs(int);
double ezs(int);
int jdz(int);

int main()
{
    int number;

    cout << "Enter an integer:";
    cin >> number;

    cout << pfg(number) << setw(5) << ncf(number) << setw(5) << jdz(number) << endl;
    cout << fixed << setprecision(1) << sinX(number) << setw(5) << fixed << setprecision(1) << cosX(number)
         << setw(5) << fixed << setprecision(1) << tanX(number) << endl;
    cout << fixed << setprecision(5) << zs(number) << setw(5) << fixed << ezs(number);
}


int pfg(int number)
{
    return sqrt(number);
}

int ncf(int number)
{
    for (int i = 1; i <= 5; i++ )
        return pow(number,i);
}

int jdz(int number)
{
    return fabs(number);
}

double sinX(int number)
{
    return sin(number);
}

double cosX(int number)
{
    return cos(number);
}

double tanX(int number)
{
    return tan(number);
}

double zs(int number)
{
    return log2(number);
}

double ezs( int number )
{
    return log(number);
}
