#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d( 12, 31, 2018 );
    cout << "The date before plus one is:" << d.print();
    d.nextDay();
    cout << "The date after plus one is:" << d.print();
}
