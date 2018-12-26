#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random();

int main()
{
    int number;

    cout << "I have a number between 1 and 1000."
         << "\nCan you guess my number?"
         << "\nPlease try your first guess.";
    cin >> number;

    srand( time(0) );

   while ( number != random() )
   {
       cin >> number;

       switch(number)
       {
           case number < random():
           cout << "Too low. Try again.";
           break;

           case number > random():
           cout << "Too high. Try again.";
           break;

           default:
           cout << "Excellent! You guessed the number!"
                << "Would you like to try again(Y or N)";
           break;
       }
   }
}

int random()
{
    return 1 + rand() % 1000;
}
