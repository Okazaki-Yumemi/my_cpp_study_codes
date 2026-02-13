#include <iostream>
using namespace std;

int main(){
    int x,y,gcd;
    cout<<"Please enter x and y"<<endl;

    cin>>x>>y;
    gcd=x%y;
    while (gcd!=0)
    {
        x=y;
        y=gcd;
        gcd=x%y;
    }

    cout<<"The biggest common yin zi of x and y is "<<y<<endl;

    return 0;

}