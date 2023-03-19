#include "Timer.h"

Time::Time():
    _second(0), _minute(0), _hours(0)//initialization list
{
    cout<<"\t Costruttore default "<<endl;
};

Time::Time(int _second, int _minute, int _hours):
    _second(_second)//initialization list
{
    cout<<"\t Costruttore parametrico "<<endl;
};

Time::Time (const Time& t):
    _second(t._second)//initialization list
{
    cout<<"\t Costruttore parametrico "<<endl;
};

Time::~Time(){
    cout<<"\t Distruttore "<<_second<<endl;
}

/*
void Time::increment(int seconds){
    if (seconds>=0 && seconds<60){
        seconds++;
    }else if(seconds==60){
        minute++;
        seconds=0;
    }  
}

void Time::increment(int minute){

}

void Time::increment(int hours){

}
*/

void Time::setSecond(int sec){
    _second = sec;
}

int Time::getSecond(){
    return _second;
}

void Time::setMinute(int min){
    _minute = min;
}

int Time::getMinute(){
    return _minute;
}

void Time::setHours(int hour){
    _hours = hour;
}

int Time::getHours(){
    return _hours;
}

void Time::print(){
    cout<<"Tempo: "<<_hours<<":"<<_minute<<":"<<_second<<endl;
}

void Time::reset(){
    _second = 0;
    _minute = 0;
    _hours = 0;
}