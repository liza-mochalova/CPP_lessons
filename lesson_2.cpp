#include "lesson_2.h"

int main(){
    Date date;
    date.Read(); // this = &date
    date.Print();
    Time* time = new Time;
    time->Read();
    time->Print();
    delete time;
    return 0;
}
