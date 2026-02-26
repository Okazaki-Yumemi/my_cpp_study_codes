#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

bool in_judge(double x,double y){
    if((x*x+y*y)<=1) return true;
    return false;
}

void RandomInit(){
    srand(time(NULL));
}

double RandomDouble(double low,double high){
    double d=(double)rand()/(RAND_MAX+1.0);
    return (low+(high-low)*d);
}


int main(){
    RandomInit();
    double n=0;
    double m=0;
    cout<<"请输入模拟次数"<<endl;
    cin>>n;
    for(int i=0;i<n;++i){
        double x=RandomDouble(-1,1);
        double y=RandomDouble(-1,1);
        if (in_judge(x,y))
        {
            m++;
        }
        
    }

    cout<<"圆周率的近似值:"<<(4*m)/(n)<<endl;
}