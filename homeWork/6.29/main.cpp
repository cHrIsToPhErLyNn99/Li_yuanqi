#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);

int main()
{
    for ( int number = 2; number <= 10000; number++ )
    {
        if( isPrime(number) )
            cout << number << "\n";
    }
}

bool isPrime(int number)
{
    for ( int i = 2; i <= sqrt(number); i++ )
    {
        if( number % i == 0 )
            return false;
    }
    return true;
}

