#ifndef DATE_H
#define DATE_H

#include <array>

class Date
{
public:
    explicit Date( int = 1, int = 1, int = 2000 );
    bool leapYear( int );
    void setMonth( int );
    void setDay( int );
    void setYear( int );
    int getMonth( int ) const;
    int getDay( int ) const;
    int getYear( int ) const;
    void nextDay();
    void print();
private:
    int month;
    int day;
    int year;
    void endOfMonth();
};

#endif
