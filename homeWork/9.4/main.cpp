#include <iostream>
#include "Time.h"
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
   Time t;
   cout << "The universal time is :";
   t.printUniverisal();
   cout << "\n The standard time is :";
   t.printStandard();
   cout << endl;
}
