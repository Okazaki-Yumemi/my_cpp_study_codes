#include <iostream>
#include <cmath>
using namespace std;

double sqrtttt(double x);
int main()
{
    double epsilon=1e-6;
    double x;
    cout<<"Please enter x"<<endl;
    cin>>x;
    cout<<"sqtr x is: "<<sqrtttt(x)<<endl;

    return 0;
}

double sqrtttt(double x)
{
    double term=1;
    double k=1;
    double sum=term;
    while (fabs(term)>1e-6)
    {
        term=((term*(1.5-k))*(x-1))/k;
        sum+=term;
        k+=1;
    }
    return sum;

}