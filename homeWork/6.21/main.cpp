#include <iostream>
using namespace std;

bool isEven (int);

int main()
{
    int number;

    for ( unsigned int counter = 1; counter <= 3; counter++ )
    {
        cout << "Enter an integer:";
        cin >> number;

        if ( isEven(number))
            cout << "This integer is an even number.\n";
        else
            cout << "This integer is an odd number.\n";
    }
}


bool isEven(int number)
{
    return !(number%2);
}
