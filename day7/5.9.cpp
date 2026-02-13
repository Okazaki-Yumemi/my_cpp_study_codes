#include <iostream>
using namespace std;
int count();
int main()
{
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count()<<endl;
    return 0;
}

int count()
{
    static int count=0;
    count+=1;
    return count;
    
}