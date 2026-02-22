#include <iostream>
#include <iomanip>

struct timeT
{
    int hh,mm,ss;
};

timeT setTime(int hh, int mm, int ss){
    return {hh,mm,ss};
}

void operator++(timeT& clock1,int){
    clock1.ss+=1;
    if (clock1.ss>=60)
    {
        clock1.ss=0;
        clock1.mm+=1;
        if(clock1.mm>=60){
            clock1.mm=0;
            clock1.hh+=1;
            if(clock1.hh>=24){
                clock1.hh=00;
            }        
        }
    }
}

void showTime(const timeT& clock1){
    std::cout << std::setfill('0') 
              << std::setw(2) << clock1.hh << ":"
              << std::setw(2) << clock1.mm << ":"
              << std::setw(2) << clock1.ss << std::endl;
}

int main(){
    timeT clock1;
    clock1=setTime(23,59,58);
    showTime(clock1);
    clock1++;
    showTime(clock1);
    clock1++;
    showTime(clock1);

    return 0;

}