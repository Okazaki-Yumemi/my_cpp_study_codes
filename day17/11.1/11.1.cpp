#include <iostream>
#include <string>
#include <cassert>
class Time
{
private:
    int hh,mm,ss;
public:
    Time(int h,int m,int s);
    void set_time();
    Time& operator +=(int seconds);
    Time& operator -=(int seconds);
    Time& operator ++();
    Time& operator --();
    Time operator -(const Time& other) const;
    bool operator >(const Time& other) const;
    void show_time();
    ~Time();
};

Time::Time(int h=0,int m=0,int s=0):hh(h),mm(m),ss(s)
{
    this->set_time();
}

void Time::set_time(){
    // 1. 处理秒的进位
    while (ss >= 60) { ss -= 60; mm += 1; }
    // 2. 处理分钟的进位 (必须在外面独立判断！)
    while (mm >= 60) { mm -= 60; hh += 1; }
    // 3. 处理小时的进位
    while (hh >= 24) { hh -= 24; }

    // 负数处理也是一样，必须平行独立写：
    while (ss < 0) { ss += 60; mm -= 1; }
    while (mm < 0) { mm += 60; hh -= 1; }
    while (hh < 0) { hh += 24; }
}

Time& Time::operator+=(int seconds){
    this->ss+=seconds;
    set_time();
    return *this;
}

Time& Time::operator-=(int seconds){
    this->ss-=seconds;
    set_time();
    return *this;
}

Time& Time::operator++(){
    ss+=1;
    set_time();
    return *this;
}

Time& Time::operator--(){
    ss-=1;
    set_time();
    return *this;
}

Time Time::operator-(const Time& other) const {
    Time temp(this->hh - other.hh, this->mm - other.mm, this->ss - other.ss);

    return temp; // 按值返回新对象！
}

void Time::show_time(){
    std::cout<<this->hh<<" : "<<this->mm<<" : "<<this->ss<<std::endl;
}

bool Time::operator>(const Time& other) const {
    // 降维打击：全部换算成当天的绝对秒数
    int my_total_seconds = this->hh * 3600 + this->mm * 60 + this->ss;
    int other_total_seconds = other.hh * 3600 + other.mm * 60 + other.ss;
    
    // 一击必杀
    return my_total_seconds > other_total_seconds;
}

Time::~Time()
{
}
