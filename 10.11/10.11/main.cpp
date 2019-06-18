#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{
    Polynomial p1(3);
    Polynomial p2(4);
    Polynomial p3;

    cin >> p1 >> p2;
    cout << "p1 = \n" << p1 << endl;
    cout << "p2 = \n" << p2 << endl;

    p3 = p1 + p2;
    cout << "p1 + p2 = \n" << p3 << endl;

    p3 = p1 - p2;
    cout << "p1 - p2 = \n" << p3 << endl;

    p3+=p1;
    cout << "p3 + p1 = \n" << p3;

    p3 = p2;
    cout << "Initializing p3 with p2:\n" << p3 << endl;
}
