#include <iostream>
using namespace std;

int main()
{
   int counter = 0;
   int number;
   int largest;
   int secondLargest;

   cout << "Enter the first number: ";
   cin >> largest;

   cout << "Enter next number: ";
   cin >> number;

   if( number > largest ? largest = number : largest)

   while ( counter < 10 )
   {
      cout << "Enter next number: ";
      cin >> number;

      if ( number > largest )
      {
         secondLargest = largest;
         largest = number;
      }
      else if ( number > secondLargest )
         secondLargest = number;

      counter = counter + 1;
   }

   cout << "\nLargest is " <<  largest
      << "\nSecond largest is " << secondLargest << endl;
}
