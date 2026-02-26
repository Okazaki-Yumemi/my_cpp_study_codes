//10.8.h

#ifndef Joseph_H
#define Joseph_H
#include <iostream>
#include <vector>

class Joseph
{
private:
    int playernum;
    int dead_num;
public:
    Joseph(int n,int dead=3);
    void simulate();
    ~Joseph();
};



#endif