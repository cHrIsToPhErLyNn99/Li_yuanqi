#include <iostream>
using namespace std;

int main()
{
    long double pi = 0.0;
    long double x = 4;
    for( int i = 1; i <= 1000; i++ )
    {
     pi = pi + x;
     if( i % 2 != 0)
     {
         x = 4 / (i*2-1);
     }
         else
         {
             x = (-1) * 4 / (2*i - 1);
         }

     cout << "pi = " << pi << endl;
    }
}
