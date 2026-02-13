#include <iostream>
using namespace std;

int zuida(int m ,int n);
int main()
{
    int x,y;
    cout<<"Please enter x and y"<<endl;
    cin>>x>>y;
    cout<<zuida(x,y)<<endl;

}
int zuida(int m ,int n)
{
    if(m<n)
    {
        return zuida(n,m);
    }
    else
    {
        if(n==0) return m;
        else
        {
            return zuida(n,m%n);
        }
    }

}