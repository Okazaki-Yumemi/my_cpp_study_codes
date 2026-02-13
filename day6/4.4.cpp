#include <iostream>
using namespace std;

int main(){
    int N=0;
    int current=1,last=0;
    cout<<"Please enter an integer."<<endl;
    cin>>N;
    current=N;
    while (current>0)
    {
        last=current%10;
        cout<<" "<<last;
        current/=10;
    }
    
    cout<<endl;

    return 0;

}