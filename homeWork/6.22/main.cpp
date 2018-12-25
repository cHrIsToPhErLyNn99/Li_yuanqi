#include <iostream>
using namespace std;

int main()
{
    int side;

    cout << "Enter an integer:";
    cin >> side;

    for( int counter = 1; counter <= side; counter++ )
    {
        for ( int row = 1; row <= side; row++ )
        {
            if( counter <= side )
                cout << "*";
            else
                cout << endl;
        }
        cout << endl;
    }
}
