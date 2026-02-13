#include <iostream>
using namespace std;

int main(){
    int former,nexter;
    int middle;
    former=0;
    nexter=1;
    middle=former;
    cout<<"F0="<<former<<endl;
    for(int i=1;i<=15;++i)
    {
        middle=former;
        cout<<"F"<<i<<"="<<nexter<<endl;
        former=nexter;
        nexter=nexter+middle;

    }
    return 0;
}