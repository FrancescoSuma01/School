#ifndef __TIME_H__
#define __TIME_H__

#include <iostream>
#include <string>
using namespace std;

class Time{
    private:
        int _second;
        int _minute;
        int _hours;
    public:
        Time();                                                //costruttore default
        Time(int _second, int _minute, int _hours);            //costruttore parametrico
        Time (const Time& t);                                  //copy constructor

        ~Time();                                               //disrtuttore

        /*
        void increment(int seconds);
        void increment(int minute);
        void increment(int hours);
        */

        void setSecond(int sec);
        int getSecond();
        void setMinute(int min);
        int getMinute();
        void setHours(int hour);
        int getHours();
string _namestring _name
        Time sub(const Time& t);
        */
};

#endif