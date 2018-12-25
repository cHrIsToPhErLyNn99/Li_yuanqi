#include <iostream>
#include <iomanip>
using namespace std;

bool isPerfect(int);
void printSum (int);

int main()
{
    for ( int number = 1; number <= 1000; number++ )
    {
       if ( isPerfect(number))
            printSum(number);
    }
}

bool isPerfect( int number )
{
   int factorSum = 1;

   for ( int i = 2; i <=  number / 2; i++ )
   {
      if ( number % i == 0 )
         factorSum += i;
   }

   return factorSum == number;
}

void printSum( int number )
{
   cout << number << " = 1";

   for ( int i = 2; i <= number / 2; i++ )
   {
      if ( number % i == 0 )
         cout << " + " << i;
   }
cout << endl;
}
