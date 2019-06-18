#ifndef TIME_H
#define TIME_H


class Time
{
public:
    Time( int, int, int );
    void setHour( int );
    int getHour() const;
    void setMinute( int );
    int getMinute () const;
    void setSecond( int );
    int getSecond() const;
    void tick();
    void print();
private:
    int hour;
    int minute;
    int second;
};

#endif
