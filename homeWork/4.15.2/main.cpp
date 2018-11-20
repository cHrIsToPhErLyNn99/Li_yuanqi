#include <iostream>

using namespace std;

int main()
{
    double sales = 1;
    double salary = 1;

    cout << "Enter sales in dollars (-1 to end):" ;
        cin >> sales ;

    unsigned int salesCounter = 1;
    while ( salesCounter <= 1 );
    {
        salary = sales*0.09+200;
        cout << "Salary is:$";
    }
    return 0;
}
