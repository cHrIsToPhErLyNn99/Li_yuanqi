#include <iostream>
using namespace std;

int main()
{
    int value = 0;
    double average = 0.0;
    int total = 0;
    int count = 0;

    cout << "Enter integers (9999 to end):" << endl;

    for ( count = 0; value != 9999; ++count )
    {
        cin >> value;

        if(value != 9999)
            total += value;
    }

    cout << "count = " << count << endl;
    average = (double)total / (count-1);

    cout << "The average of the entered integers is" << average << endl;
}
