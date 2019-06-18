#include "Date.h"
#include <iostream>
#include <array>
using namespace std;

static const array< int, 12 > last = {31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date( int m, int d, int y )
:month(m), day(d), year(y)
{
    setMonth();
    setDay();
    setYear();
}

void Date::setMonth( int m )
{
    month = m;
}

void Date::setDay( int d )
{
   day = d;
}

void Date::setYear( int y )
{
    year = y;
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

void Date::nextDay()
{
    setDay( getDay() + 1 );
    if( getDay() = last[ getMonth() - 1 ] + 1 )
    {
        day = 1;
        setMonth( getMonth() + 1 );
        if( month > 12 )
        {
            month = 1;
            setYear( getYear() + 1 );
        }
    }
}

void Date::print()
{
    cout << "\nThe date is :" << Date::getYear() << "." << Date::getMonth() << "." << Date::getDay() << endl;
}

void Date::endOfMonth( int ld )
{
    if( month = 2 && leapYear( year ) )
        ld = 29;
    else
        ld = last[ month - 1 ];
}

bool Date::leapyear( int y )
{
    if( y % 400 == 0 || ( y % 4 == 0 && y % 100 == 0) )
        return true;
    else
        return false;
}
