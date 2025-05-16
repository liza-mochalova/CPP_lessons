#include "lesson_2.h"

int main(){
    Date date;
    date.Read(); // this = &date
    date.Print();
    Time time;
    time.Read();
    time.Print();
}