#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
double x;
double epsilon=1e-6;

int main(){
    cout<<"Please enter epsilon(1e-6 default)"<<endl;
    cin>>epsilon;
    cout<<"Please enter the x"<<endl;
    cin>>x;
    cout<<"The sin(x) is: "<<f(x)<<endl;
    return 0;
}

double f(double x){
    double count=1;
    double sum=0;

    double term=x;
    while (fabs(term)>epsilon)
    {
        sum+=term;
        
        term = -term * pow(x,2) / ((2 * count) * (2 * count + 1));

        count+=1;
    }
    return sum;
}