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

istream &operator>>( istream &input, const Matrix &number )
{
    input >> number.ff >> number.fs << number.ft << number.sf << number.ss << number.st << number.tf << number.ts << number.tt;
    return input;
}
