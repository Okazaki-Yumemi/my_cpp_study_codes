#include <iostream>
using namespace std;

int fib();
int main(){
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    cout<<fib()<<endl;
    return 0;
}

int fib()
{
    static int former=0;
    static int count=0;
    static int later=1;
    int middle;
    count+=1;
    if (count==1){
        return former;}
    middle=former;
    former=later;
    later=later+middle;
    return former;
    
}