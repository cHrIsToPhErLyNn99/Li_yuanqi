#include "Time.h"
#include <iomanip>
#include <ctime>
#include "Time.h"
using namespace std;

Time::Time()
{
    const time_t currentTime = time(0);
    const tm*localTime = localTime( &currentTime );
    setTime( localTime->tm_hour, localTime->tm_min, localTime->tm_sec );
}

void Time::setTime( int h, int m, int s )
{
    hout = ( h >= 0 && h <= 24 ) ? h : 0;
    minute = ( m >= 0 && m <= 60 ) ? m : 0;
    second = ( s >= 0 && s <= 60 ) ? s : 0;
}

void Time::printUniverisal()
{
    cout << setfill(0) << setw(2) << hour << ":" << setfill(0) << setw(2) << minute << ":" << setfill(0) << setw(2) << second;
}

void Time::printStandard()
{
    cout << ( ( hour == 0 ) || hour == 12 ) ? h : hour % 12 << "." << minute << "." << second << ( hour <= 12 ? "AM" : "PM" );
}
