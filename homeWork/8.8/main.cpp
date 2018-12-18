#include <iostream>
using namespace std;

int main()
{
    unsigned int values[5] = {2.4.6.8.10};

    unsigned int *ptr;

    for ( size_t i = 0; i < 5; i++ )
        cout << values [ i ] << " ";

    vptr = &values[0];
    vptr = values;

    for ( size_t i = 0; i < 5; i++ )
        cout << *( vptr + i ) << " ";

    for ( size_t i = 0; i < 5; i++ )
        cout << *( values + i ) << " ";

    for( size_t i = 0; i < 5; i++ )
        cout << vptr[i] << " ";


    values[4];
    *( values + 4 );
    vptr[4];
    *( vptr + 4 );
}
