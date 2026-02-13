#include <iostream>
using namespace std;

int A(int a,int b);

int main()
{
    int m;
    int n;
    cout<<"Please enter m and n"<<endl;
    cin>>m>>n;
    cout<<"The A("<<m<<","<<n<<") is :"<<A(m,n)<<endl;
    return 0;
}

int A(int a, int b)
{   
    int m=a;
    int n=b;

    if(m==0)
    {
        return(n+1);
    }
    else if (m!=0 && n==0)
    {
        return A(m-1,1);
    }
    else
    {
        return A(m-1,A(m,n-1));
    }
    
}