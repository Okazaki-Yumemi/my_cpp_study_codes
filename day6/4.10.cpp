#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    for (a=1;a<=9;++a)
    {
        for(b=0;b<=9;++b)
        {
            if(((a*1000+200+b*10+3)%23)==0) cout<<a*1000+200+b*10+3<<endl;
        }
    }
    return 0;
}