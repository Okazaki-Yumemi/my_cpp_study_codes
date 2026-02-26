#include <iostream>

struct Complex
{
    int first,second;
};


Complex Complex_add(const Complex& a,const Complex & b){
    return {a.first+b.first,a.second+b.second};
}

Complex Complex_multy(const Complex& a,const Complex & b){
    return {a.first*b.first-a.second*b.second
        ,a.second*b.first+a.first*b.second};
}

Complex Complex_construct(int a ,int b){
    return {a,b};
}

void Complex_output(const Complex &a){
    if (a.second>0)
    {
        std::cout<<a.first<<"+"<<a.second<<"i"<<std::endl;
    }
    if(a.second==0){
        std::cout<<a.first<<std::endl;
    }
    else{
        std::cout<<a.first<<a.second<<'i'<<std::endl;
    }
    
}