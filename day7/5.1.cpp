#include <iostream>
using namespace std;

bool f(int n);
int x;
int main(){
    cout<<"Please enter an integer ."<<endl;
    cin>>x;
    if (x==1 ||x==2)
    {
        cout<<"The integer "<<x<<" is a prime number"<<endl;
        return 0;
    }
    
    if(f(x)) cout<<"The integer "<<x<<" is a prime number"<<endl;
    else cout<<"The integer "<<x<<" is not a prime number"<<endl;
    return 0;
}
bool f(int n){
    for (int i=2;i<n;++i)
    {
        if(n%i==0) return false;

    }
    return true;
}