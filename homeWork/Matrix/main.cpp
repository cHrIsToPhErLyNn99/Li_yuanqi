#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix matrix;

    cout << "Enter a matrix." << endl;
    cin >> matrix;

    cout << "The matrix is :";
    cout << "\n\n" << matrix << endl;
}
