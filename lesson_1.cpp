#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct Date
{
    int day, month, year;
};
struct Time
{
    int hours, minutes, seconds;
};

void Set(Date& date, int year, int month, int day){
    if (year>=1 && year<=2030)
    date.year=year;
    else
    exit(1);
    if (month>=1 && month<=12){
        if (month==2){
            date.month=month;
            if (day>=1 && day<=29){
                date.day=day;
            }
            else
            exit(1);
        }
        else{
            date.month=month;
            if (day>=1 && day<=31){
                date.day=day;
            }
            else
            exit(1);
        }
    }
    else
    exit(1);

}

void Set(Time& time, int hours, int minutes, int seconds=0){
    if (hours>=0 && hours<=23)
    time.hours=hours;
    else exit(1);
    if (minutes>=0 && minutes<=59)
    time.minutes=minutes;
    else exit(1);
    if (seconds>=0 && seconds<=59)
    time.seconds=seconds;
    else exit(1);
}

void Read(Date& date){
    cout << "Year: ";
    int y;
    cin>>y;
    cout << "Month: ";
    int m;
    cin>>m;
    cout << "Day: ";
    int d;
    cin>>d;
    Set(date,y,m,d);
}

void Read(Time& time){
    cout << "Hours: ";
    int h;
    cin>>h;
    cout << "Minutes: ";
    int mi;
    cin>>mi;
    Set(time,h,mi);
}

void Print(const Date& date){
    cout << "Date: " << date.day<<"."<<date.month<<"."<<date.year<<endl;
}

void Print(const Time& time){
    cout<<"Time: "<<time.hours<<":"<<time.minutes<<":"<<time.seconds<<endl;
}

int main(int argc, char** argv){
    Date date={0,0,0};
    Time time={0,0,0};
    Read(date);
    Read(time);
    Print(date);
    Print(time);

    return 0;
}