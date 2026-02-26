#include "9.5.h"
#include <iostream>
int gcd(int a ,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

rationalT CreateRational(int num,int den){
    int n=gcd(num,den);

    return{num/n,den/n};
}

rationalT AddRational(const rationalT &r1,const rationalT &r2){
    int new_num=(r1.num*r2.den+r2.num*r1.den);
    int new_den=(r1.den*r2.den);
    int n=gcd(new_num,new_den);
    return {new_num/n,new_den/n};
}

rationalT MultiplyRational(const rationalT &r1,const rationalT &r2){
    int new_num=(r1.num*r2.num);
    int new_den=(r1.den*r2.den);
    int n=gcd(new_num,new_den);
    return {new_num/n,new_den/n};
}

double GetRational(const rationalT &r){
    return {(double) r.num/r.den};
}

void PrintRational(const rationalT &r){
    std::cout<<r.num<<"/"<<r.den<<std::endl;
}