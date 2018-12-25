#include <iostream>
using namespace std;

int reverseInteger(int);

int main()
{
    int number;

    cout << "Enter an integer:";
    cin >> number;

    cout << reverseInteger( number );
}

int reverseInteger(int number)
{
    int reverse = 0;

    while ( number > 0)
    {
        reverse *= 10;
        reverse += number % 10;
        number /= 10;
    }

    return reverse;
}
