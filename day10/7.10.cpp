#include <iostream>
#include <cmath>
using namespace std;

double jifen(double (*f)(double),double x1,double x2);

int main()
{
    return 0;
}

double jifen(double (*f)(double),double x1,double x2)
{
    int n=100000;
    double integral=(x2-x1)/n;
    double sums1=0;
    for(int i=0;i<n;++i)
    {
        double x=x1+i*integral;
        double height1=f(x);
        sums1+=integral*height1;
    }
    return sums1;
}