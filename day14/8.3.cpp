#include <iostream>
#include <cmath>
using namespace std;

struct rationalT
{
    int num,den;
};
int gcd(int a,int b){
    if (a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}
rationalT CreateRational(int num,int den){
    rationalT x;
    x.num=num/gcd(num,den);
    x.den=den/gcd(num,den);
    return x;
}

rationalT Addrational(const rationalT&r1,const rationalT& r2){
    int num1=r1.num*r2.den+r2.num*r1.den;
    int den1=r1.den*r2.den;
    int com=gcd(num1,den1);

    return {num1/com,den1/com};
}

rationalT MultiplyRational(const rationalT &r1,const rationalT &r2){
    int num1 = r1.num*r2.num;
    int den1 = r2.den*r1.den;
    int com  = gcd(num1,den1);
    return {num1/com,den1/com};
}

double GetRational(const rationalT& r1){
    return (double)r1.num/r1.den;
}

void PrintRational(const rationalT & r1 ){
    cout<<r1.num<<"/"<<r1.den<<endl;
}
int main(){
    rationalT r1=CreateRational(3,4);
    rationalT r2=CreateRational(2,3);
    PrintRational(r1);
    PrintRational(r2);
    cout<<GetRational(r1)<<endl;
    rationalT r3=Addrational(r1,r2);
    PrintRational(r3);
    rationalT r4=MultiplyRational(r1,r2);
    PrintRational(r4);
    
    return 0;

}