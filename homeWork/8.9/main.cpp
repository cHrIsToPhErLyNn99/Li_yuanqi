#include <iostream>
using namespace std;

long value1 = 200000;
long value2;

int main()
{
  long *longPtr;

  longPtr = &value1;

  cout << *longPtr << " ";

  value2 = *longPtr;

  cout << value2 << " ";

  cout << &value1 << " ";

  cout << longPtr << " ";
}
