#include <iostream>
using namespace std;

int main()
{
   double gallons;
   double miles;
   double totalGallons = 0;
   double totalMiles = 0;
   double milesPerGallon;
   double totalMilesPerGallon;

   cout << "Enter miles driven (-1 to quit): ";
   cin >> miles;
   cout << fixed;

   while ( miles != -1 )
   {
      cout << "Enter gallons used: ";
      cin >> gallons;

      totalMiles = totalMiles + miles;
      totalGallons = totalGallons + gallons;

      if ( gallons != 0 )
      {
         milesPerGallon =  miles / gallons;
         cout << "MPG this tankful: " << milesPerGallon;
      }

      if ( totalGallons != 0 )
      {
         totalMilesPerGallon = totalMiles / totalGallons;
         cout << "\nTotal MPG: " << totalMilesPerGallon;
      }

      cout << "\n\nEnter miles driven (-1 to quit): ";
      cin >> miles;
   }
}
