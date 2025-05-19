#ifndef _LESSON_2_H_
#define _LESSON_2_H_
#include <iostream>

class Date{

    int _day, _month, _year;
    int compare(const Date& d)const;

    public:
    Date(int year, int month, int day): _year(year), _month(month), _day(day){}
    Date(){};
    void Set(int _year, int _months, int _day);
    void Print() const;
    void Read ();
    bool equals(const Date& d)const{return this->compare(d)==0;}
    bool greater(const Date& d)const{return this->compare(d)>0;}
    bool less(const Date& d)const{return this->compare(d)<0;}
};

class Time {
    int _hours,_minutes,_seconds;
    public:
    Time(int hours, int minutes, int seconds): _hours(hours), _minutes(minutes), _seconds(seconds){}
    Time(){};
    void Set(int _hours,int _minutes,int _seconds=0);
    void Print() const;
    void Read();
};

#endif