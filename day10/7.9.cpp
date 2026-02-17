#include <iostream>
#include <cmath>

double solve(double (*func)(double),double x1,double x2);
double check_standard=1e-6;
double myEquation(double x);

int main()
{
    double root = solve(myEquation, 0, 1);
    std::cout<<"ROOT IS: "<<root<<std::endl;
    return 0;
}
double solve(double (*func)(double),double x1,double x2)
{
    double f1=func(x1),f2=func(x2);
    double x_new=x2-(f2*(x2-x1))/(f2-f1);
    if(fabs(func(x_new))<check_standard)
    {
        return x_new;
    }
    else
    {
        return solve(func,x2,x_new);
    }
}
double myEquation(double x) 
{
    return x*x*x - 5*x + 1;
}