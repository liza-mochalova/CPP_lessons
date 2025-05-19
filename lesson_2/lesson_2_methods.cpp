#include <iostream>
#include "lesson_2.h"

void Date::Set(int year, int month, int day){
    if (year>=1 && year<=2030)
    this->_year=year;
    else
    exit(1);
    if (month>=1 && month<=12){
        if (_month==2){
            this->_month=month;
            if (day>=1 && day<=29){
                this->_day=day;
            }
            else
            exit(1);
        }
        else{
            this->_month=month;
            if (day>=1 && day<=31){
                this->_day=day;
            }
            else
            exit(1);
        }
    }
    else
    exit(1);
}

void Time::Set(int hours,int minutes,int seconds){
    if (hours>=0 && hours<=23){
        this->_hours=hours;
        //(*this)._hours=hours;
    }
    if (minutes>=0 && minutes<=59){
        this->_minutes=minutes;
    }
    if (seconds>=0 && seconds<=59){
        this->_seconds=seconds;
    }
}

using std::cout;
using std::endl;
using std::cin;

void Date::Read(){
    cout << "Year: ";
    int y;
    cin>>y;
    cout << "Month: ";
    int m;
    cin>>m;
    cout << "Day: ";
    int d;
    cin>>d;
    this->Set(y,m,d);
}

void Time::Read(){
    cout<<"Hours: ";
    int h;
    cin>>h;
    cout<<"Minutes: ";
    int mi;
    cin>>mi;
    cout<<"Seconds: ";
    int s;
    cin>>s;
    Set(h,mi,s);
}

void Date::Print() const{
    cout<<_year<<"."<<_month<<"."<<_day<<endl;
}

void Time::Print() const {
    cout<<_hours<<":"<<_minutes<<":"<<_seconds<<endl;
}

int Date::compare(const Date& d)const{
    if(this->_year==d._year&&this->_month==d._month&&this->_day==d._day)return 0;
    if(this->_year>d._year)return 1;
    if(this->_year==d._year){
        if(this->_month>d._month)return 1;
        if(this->_month==d._month){
        if(this->_day>d._day) 
        return 1;
        }
    }
    return -1;
}