#include <iostream>
using namespace std;

int tripleByValue(int);
void tripleByReferrence(int&);

int main()
{
    int count;
    cout << "Enter an integer:";
    cin >> count;

    cout << "Count is " << count << " before tripleByValue,"
         << "\nValue returned by tripleByValue is" << tripleByValue(count)
         << "\nCount is " << count << " after tripleByValue." << endl;

    cout << "\nCount is " << count << " before tripleByReference," << endl;
    tripleByReferrence(count);
    cout << "Count is " << count << " after tripleByReference." << endl;
}

int tripleByValue(int count)
{
    return count * 3;
}

void tripleByReferrence(int& count)
{
    count *= 3;
}
