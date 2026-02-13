#include <iostream>
using namespace std;

int main(){
    int N=0;
    cout<<"Please enter an integer"<<endl;
    cin>>N;

    for(int i=1;i<=N;++i)
    {
        for(int h=1;h<=N-i;++h)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}