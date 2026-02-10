#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Please enter x:1,2 or 3"<<endl;
    cin>>x;
    switch (x)
    {
    case 1 :
        cout<<"aaa"<<endl;
        break;
    case 2:
        cout<<"bbb"<<endl;
        break;
    default:
        cout<<"ccc"<<endl;
        break;
    }
    return 0;
    
}