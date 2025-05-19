#include "lesson_2.h"
using std::cout;
using std::endl;

int main(){
    //лабораторная работа 2
    Date date;
    date.Read(); // this = &date
    date.Print();
    Time* time = new Time;
    time->Read();
    time->Print();
    delete time;
    Date* d1=new Date;
    Date* d2=new Date;
    d1->Set(2002,12,14);
    d2->Set(2025,05,18);
    cout <<std::boolalpha;
    cout<<d2->equals(*d1)<<endl;
    cout<<d2->greater(*d1)<<endl;
    cout<<d2->less(*d1)<<endl;
    
/*
    //лабораторная работа 3(добавление конструкторов)
    Date* d=new Date(2025,05,18);
    Time* time=new Time(21,38,0);
    delete(d);
    delete(time);
*/
    return 0;
}