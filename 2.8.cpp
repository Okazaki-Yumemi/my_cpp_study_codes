#include <iostream>
using namespace std;
int main(){
    double money,lixi=1.012,year,final_money;
    
    cout<<"Please enter your money,and year"<<endl;
    
    cin>>money>>year;
    
    final_money=money*lixi*year;
    
    cout<<"Your final lixi: "<<final_money<<endl;
    
    return 0;
    
}