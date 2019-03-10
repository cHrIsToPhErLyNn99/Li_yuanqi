#include <iostream>
#include <iomanip>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix matrix;

    cout << "Enter 9 numbers:" << endl;
    cin >> matrix;

    cout << "The matrix is:";
    cout << "\n\n" << matrix;
}
