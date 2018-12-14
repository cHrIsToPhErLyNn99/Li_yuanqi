#include <iostream>
using namespace std;

int main()
{
    int row;
    int space;
    int column;

    for( int row = 1; row <=5; row++ )
    {
        for( int space = 1; space <= 5 - row; space++ )
            cout << " ";
        for( int column = 1; column <= 2 * row - 1; column++ )
            cout << "*";
            cout << "\n";
    }
    for( int row = 4; row >= 1; row-- )
    {
        for(int space = 1; space <= 5 - row; space++ )
           cout << " ";
        for( int column = 1; column <= 2 * row - 1; column++ )
           cout << "*";
           cout << "\n";
    }
}
