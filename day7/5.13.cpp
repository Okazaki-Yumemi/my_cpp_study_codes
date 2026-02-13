#include <iostream>
#include <cmath>
using namespace std;

double area(double r,int n);
int main(){
    double r;
    int n;
    cout<<"What's the radius of the circle?"<<endl;
    cin>>r;
    cout<<"How many rectangle you want?"<<endl;
    cin>>n;

    cout<<"The area of the circle is: "<<4*area(r,n)<<endl;

    return 0;

}

double area(double r, int n)
{
    double width=r/n;
    double current_area=0;
    for (int i=n;i>0;--i)
    {
        double x=i*width;
        double height=sqrt(r*r-x*x);
        current_area+=width*height;
    }
    return current_area;
}