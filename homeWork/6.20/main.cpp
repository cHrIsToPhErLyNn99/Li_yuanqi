#include <iostream>
using namespace std;

bool mutiple(int,int);

int main()
{
    int a;
    int b;

    cout << "Enter 2 integers:" << endl;
    cin >> a >> b;

    if (mutiple(a,b))
        cout << "True";
    else
        cout << "False";
}

bool mutiple(int a, int b)
{
    return !( b % a );
}

