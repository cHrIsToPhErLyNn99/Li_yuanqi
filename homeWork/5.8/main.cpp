#include <iostream>
using namespace std;

int main()
{
    int number;
    int minimum;
    int value;

    cout << "Enter the first integer ( 1 to end )" << endl;
    cin >> number;

    for( int counter = 1; counter <= number; counter++)
    {
        cin >> value;

        if( value < minimum? minimum = value : minimum = minimum )
        {
            minimum;
        }
    }
    cout << "The minimum number is:" << minimum << endl;
}
