#include <iostream>
using namespace std;

int integerPower(int,int);

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter 2 integers:" << endl;
    cin >> a >> b;

    c = integerPower(a,b);

    cout << "The result is:" << c << endl;
}

int integerPower(int a, int b)
{
    int product = 1;

    for ( int i = 0; i < b; i++ )
      product *= a;

    return product;
}
