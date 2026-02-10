#include <iostream>
using namespace std;

int main(){
    char type;
    double time,Mperhour,N,Mpernum,fixed,salary,get;
    cout<<"Please enter your type: T,N,or,F"<<endl;
    cin>>type;
    switch (type){
    case 'T':
        cout<<"Please enter your m per hour and hour"<<endl;
        cin>>Mperhour>>time;
        salary=Mperhour*time;
        break;
    case 'N':
        cout<<"Please enter your m per N and N"<<endl;
        cin>>Mpernum>>N;
        salary=Mpernum*N;
        break;
    case 'F':
        cout<<"Please enter your salary"<<endl;
        cin>>salary;
        break;
    }
    if (salary<2000) cout<<"Your salary and final salary is "<<salary<<endl;
    if (salary>2000 & salary<2500) cout<<"Your salary is "<<salary<<" And your final salary is "<<salary-(salary-2000)*0.05<<endl;
    if (salary>2500 & salary<4000) cout<<"Your salary is "<<salary<<" And your final salary is "<<salary-25-(salary-2500)*0.1<<endl;
    if (salary>4000) cout<<"Your salary is "<<salary<<" And your final salary is "<<salary-(salary-4000)*0.15-25-150<<endl;
    return 0;
    
}