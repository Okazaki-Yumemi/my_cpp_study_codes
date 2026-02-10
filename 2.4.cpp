#include <iostream>
using namespace std;
int main(){
    double salary,hour,hour_salary,new_salary;
    cout<<"Please enter hour and salary per hour"<<endl;
    cin>>hour>>hour_salary;
    salary=hour*hour_salary;
    new_salary=salary*0.9;
    cout<<"your salary should be "<<salary<<" and you will get "<<new_salary<<endl;
    return 0;
}