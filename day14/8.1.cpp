#include <iostream>

using namespace std;

struct fushu
{
    int shibu;
    int xubu;
};

fushu add(const fushu& x,const fushu& y){
    fushu a;
    a.shibu = x.shibu + y.shibu;
    a.xubu = y.xubu + x.xubu;
    return a;
}

fushu mutiply(const fushu&x ,const fushu & y){
    fushu a;
    a.shibu=x.shibu*y.shibu-x.xubu*y.xubu;
    a.xubu=x.shibu*y.xubu+y.shibu*x.xubu;
    return a;
}

void print(const fushu&x){
    cout<<x.shibu<<" + "<<x.xubu<<"i";
}

int main(){
    fushu x1={1,2};
    fushu x2={3,4};
    fushu a;
    fushu b;
    a=add(x1,x2);
    print(a);
    cout<<endl;
    b=mutiply(x1,x2);
    print(b);
    cout<<endl;
    fushu x3;
    cout<<"please enter a,b"<<endl;
    cin>>x3.shibu>>x3.xubu;
    print(x3);
    cout<<endl;

}