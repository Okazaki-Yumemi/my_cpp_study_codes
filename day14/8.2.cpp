#include <iostream>

using namespace std;

struct pointT
{
    double x,y;
};

pointT midpoint(const pointT& x1,const pointT& x2){
    return {(x1.x + x2.x) / 2.0, (x1.y + x2.y) / 2.0}; 
}
int main(){
    pointT x1={3,4};

    pointT x2={5,7};

    pointT mid=midpoint(x1,x2);

    cout<<"x: "<<mid.x<<" "<<"y: "<<mid.y<<endl;

    return 0;
}

