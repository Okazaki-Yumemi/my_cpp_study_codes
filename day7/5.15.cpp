#include <iostream>
using namespace std;

bool isEven_digui(int n);
bool isEven_budigui(int n);

int main()
{
    int x;
    cout << boolalpha;
    cout<<"Please enter an integer"<<endl;
    cin>>x;
    cout<<"digui SAYS it's "<<isEven_digui(x)<<endl;
    cout<<"budigui Says it's "<<isEven_budigui(x)<<endl;
    return 0;
}

bool isEven_budigui(int n)
{
    bool judge=true;
    while (n>0)
    {
        if ((n%10)%2 !=0)
        {
            judge=false;
            return judge;
        }
        n/=10;
    }
    return judge;
    
}

bool isEven_digui(int n)
{
    bool judge=true;
    if (n<10)
    {
        if (n%2==0)
        {
            judge=true;
            return judge;
        }
        else
        {
            judge=false;
            return false;
        }
        
    }
    else
    {
        if ((n%10)%2==0)
        {
            return isEven_digui(n/10);
        }
        else
        {
            return false;
        }
        
        
    }
    
            
}