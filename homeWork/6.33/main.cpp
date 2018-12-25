#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();

int main()
{
    int heads = 0;
    int tails = 0;

    srand( time(0) );

    for ( unsigned int counter = 1; counter <= 100; counter++ )
    {
        if ( flip() == 0 )
            ++heads;
        else
            ++tails;
    }
    cout << "The total head counts is:" << heads
         << "\n The total tail counts is:" << tails;
}

int flip()
{
    return rand() % 2;
}
