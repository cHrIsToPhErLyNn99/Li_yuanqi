#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;

Time::Time( int h, int m, int s )
{
    setHour( h );
    setMinute( m );
    setSecond( s );
}

void Time::setHour( int h )
{
    hour = ( h >= 0 && h <= 24 ? h : h % 24 );
}

void Time::setMinute( int m )
{
    minute = ( m >= 0 && m <= 60 ? m : m % 60 );
}

void Time::setSecond( int s )
{
    second = ( s >= 0 && s <= 60 ? s : s % 60 );
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}

void Time::tick()
{
    setSecond( getSecond() + 1 )
    if( getSecond() > 60 )
    {
        second = 1;
        setMinute( getMinute() + 1 );
        if( getMinute() > 60 )
        {
            minute = 1;
            setHour( getHour() + 1 );
        }
    }
}

void Time::print()
{
    cout << setfill(0) << setw(2) << hour << ":" << setfill(0) << setw(2) << minute << ":" << setfill(0) << setw(2) << second;
}
