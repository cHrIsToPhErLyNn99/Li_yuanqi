#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    int multiply = 1;

    for ( int number = 1; number <= 5; number++ )
    {
        multiply = number * multiply;
    }

    cout << "The result is :" << multiply << endl;
}
