#include "Matrix.h"
#include <iomanip>
using namespace std;

ostream &operator<<( ostream &output, const Matrix &number )
{
    output << number.ff << setw(5) << number.fs << setw(5) << number.ft << endl;
    output << number.sf << setw(5) << number.ss << setw(5) << number.st << endl;
    output << number.tf << setw(5) << number.ts << setw(5) << number.tt << endl;
    return output;
}

istream &operator>>( istream &input, Matrix &number )
{
    input >> number.ff;
    input.ignore();
    input >> number.fs;
    input.ignore();
    input >> number.ft;

    input >> number.sf;
    input.ignore();
    input >> number.ss;
    input.ignore();
    input >> number.st;

    input >> number.tf;
    input.ignore();
    input >> number.ts;
    input.ignore();
    input >> number.tt;
    return input;
}
