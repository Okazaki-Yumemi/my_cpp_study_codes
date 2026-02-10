#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x1,y1;
    double x2,y2;
    double distance;
    cout<<"Please enter x1 and y1 "<<endl;
    cin>>x1>>y1;
    cout<<"Please enter x2 and y2"<<endl;
    cin >> x2 >> y2;
    distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout <<"The distance between (x1,y1) and (x2,y2) is: "<<distance<<endl;
    return 0;
}