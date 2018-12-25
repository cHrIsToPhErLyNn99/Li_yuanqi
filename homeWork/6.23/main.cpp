#include <iostream>
using namespace std;

int main()
{
    int side;

    cout << "Enter an integer:";
    cin >> side;

    char fillCharacter;
    cout << "Input a charactor:";
    cin >> fillCharacter;

    for ( int row = 1; row <= side; row++ )
    {
        for (int column = 1; column <= side; column++ )
        {
           if ( column <= side )
            cout << fillCharacter;
           else
            cout << endl;
        }
        cout << endl;
    }

}
