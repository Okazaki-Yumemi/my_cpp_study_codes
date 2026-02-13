#include <iostream>
using namespace std;

int main(){
    double xiang=1;
    double sum=0;
    for (int i=1;i<=30;++i)
    {
        xiang=xiang*i;
        sum+=xiang;
    }
    cout<<"The answer is: "<<sum<<endl;
    return 0;
}