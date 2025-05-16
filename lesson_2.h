#ifndef _LESSON_2_H_
#define _LESSON_2_H_
#include <iostream>

class Date{

    int _day, _month, _year;

    public:
    void Set(int _year, int _months, int _day);
    void Print();
    void Read ();
};

class Time {
    int _hours,_minutes,_seconds;
    public:
    void Set(int _hours,int _minutes,int _seconds=0);
    void Print();
    void Read();
};

#endif