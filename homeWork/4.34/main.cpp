#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int x = 1;

    cout << "Enter an integer." << endl;
    cin >> n;

    while ( n >= 1 )
    {
        x= x * n;
        n--;
    }
     cout << "The result is :" << x << endl;
}
