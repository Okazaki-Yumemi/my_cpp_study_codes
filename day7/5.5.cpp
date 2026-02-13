#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n=0;
    while (fib(n)<=10000)
    {
        cout<<"Fib("<<n<<"): "<<fib(n)<<endl;
        n+=1;
    }
    
}

int fib(int n)
{
    if(n==0) 
    {
        return 0;
    }
    if(n==1) 
    {
        return 1;
    }
    else
    {
        int m=fib(n-1)+fib(n-2);
        return m;
    }

}