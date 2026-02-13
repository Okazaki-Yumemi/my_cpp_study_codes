#include <iostream>
using namespace std;

int main(){
    int N=0,sum=0;
    cout <<"Please enter an integer"<<endl;
    cin>>N;
    for (int i = 1; i<= N; ++i)
    {
        sum+=2*i-1;
    }
    cout<<"The sum of the first Nth odd number is: "<<sum;

    return 0;
}