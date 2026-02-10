#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int square_a,square_b,square_c;
    cout<<"Please enter three integral"<<endl;

    cin>>a>>b>>c;

    square_a=a*a;
    square_b=b*b;
    square_c=c*c;
    if (a+b>c && a+c>b && b+c>a)
    {
        cout<<"Yes,they can compose a triangle"<<endl;
        if (square_a+square_b==square_c ||
            square_b+square_c==square_a ||
            square_a+square_c==square_b)
        {
            cout<<"And it is a zhi jiao san jiao xin"<<endl;
        }
        
    }
    else
    {
        cout<<"They cant compose a triangle";
    }
    return 0;
    
}