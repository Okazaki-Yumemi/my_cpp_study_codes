#include <iostream>
using namespace std;

int main(){
    char x;
    cout<<"Please enter a char"<<endl;
    cin>>x;
    switch (x)
    {
    case 'z':
        cout<<'c'<<endl;
        break;
    case 'y':
        cout<<'b'<<endl;
        break;
    case 'x':
        cout<<'a'<<endl;
        break;
    
    default:
        cout<<char(x+3)<<endl;
        break;
    }

    return 0;
    
}