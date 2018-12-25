#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int);
int fahrenheit(int);

int main()
{
    cout << "celsius" << setw(6) << "fahrenheit";

    for( int i = 1; i <= 100; i++ )
    {
        cout << i << setw(12) << celsius(i) << "\n";
    }

    cout << "farenheit" << setw(6) << "celsius";

    for ( int x = 32; x <= 212; x++ )
        cout << x << setw(14) << fahrenheit(x) << "\n";
}


int celsius(int i)
{
    return i * 1.8 + 32;
}

int fahrenheit(int x)
{
    return (x - 32) / 1.8;
}
