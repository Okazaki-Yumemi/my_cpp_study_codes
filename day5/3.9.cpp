#include <iostream>
using namespace std;

int main(){
    char x;

    cout<<"Please enter a character"<<endl;
    cin>>x;
    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"The character "<<x<<" is a yuan yin"<<endl;
        break;
    
    default:
        cout<<"The character "<<x<<" is not a yuan yin"<<endl;
        break;
    }

}