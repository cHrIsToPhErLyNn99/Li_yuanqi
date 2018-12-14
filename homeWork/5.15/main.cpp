#include "GradeBook.h"

int main()
{
    GradeBook myGradeBook ( "CS101 C++ programming" );

    myGradeBook.displayMessage();
    myGradeBook.iputGrades();
    myGradeBook.displayClassReprot();

    int number = 0;
    int average = 0;
    int total = 0;

    total = 4*aCount + 3*bCount + 2*cCount + 1*fCount
    number = aCount + bCount + cCount + fCount
    average = total / number

    cout << "The average grade of students is:" << average << endl;
}
