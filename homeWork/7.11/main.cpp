#include <iostream>
#include <array>
using namespace std;

int main()
{
    array < int,10 > counts = {};

    array < int,15 > bonus;
    for ( size_t i = 0; i < 15; i++ )
        bonus[i] += 2;

    array < double,12 > monthlyTemperatures;
    for ( size_t i = 0; i < 12; i++ )
        cin >> monthlyTemperatures[i];

    array < int,5 > bestScores;
    for ( size_t i = 0; i < 5; i++ )
        cout << bestScores[i] << " \n";
}
