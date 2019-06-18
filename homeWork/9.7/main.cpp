#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t( 4,59,59 );
    cout << "The time is:";
    t.print();

    cout << "The time after adding 1 second is:";
    t.tick();
    t.print();
}
