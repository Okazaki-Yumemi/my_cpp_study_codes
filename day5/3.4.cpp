#include <iostream>
using namespace std;

int main(){
    double x,y;
    
    cout<<"Please enter x "<<endl;
    
    cin>>x;

    if (x<1) cout<<"y is: "<<x<<endl;

    if (x>=1 && x<10) cout<<"y is: "<<2*x-1<<endl;

    if (x>=10) cout<<"y is: "<<3*y-11<<endl;

    return 0;

}