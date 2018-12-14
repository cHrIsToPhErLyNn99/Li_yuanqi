#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int row = 0;
    int space = 0;
    int column = 0;

    cout << "Enter an integer to define total row numbers :" << endl;
    cin >> number;

    if( number % 2 != 0)
        number = number;
    else
        cout << "Invalid integer." << endl;

    for( int row = 1; row <= (number + 1) / 2; row++ )
    {
        for( int space = 1; space <= (number + 1) / 2 - row; space++ )
            cout << " ";
        for( int column = 1; column <= 2 * row - 1; column++ )
            cout << "*";
            cout << "\n";
    }

    for( int row = (number - 1) / 2; row >= 1; row-- )
    {
        for( int space = 1; space <= (number + 1) / 2 - row; space++ )
            cout << " ";
        for( int column = 1; column <= 2 * row - 1; column++ )
            cout << "*";
            cout << "\n";
    }
}
