#include <iostream>
using namespace std;
int main(){
    double price=0.6,hour,sum_price;
    int one_yuan,half_yuan,one_in_ten_yuan;
    cout<<"Please enter your hour"<<endl;
    cin>>hour;
    sum_price=price*hour;
    one_yuan=int(sum_price);
    if(sum_price-int(sum_price) >0.5){
        cout<<"Need one coin :"<<one_yuan<<" half coint:1"<<" 0.1 coin: "<<(sum_price-int(sum_price)-0.5)/0.1<<endl;
    } else{
        cout<<"Need one coin :"<<one_yuan<<" half coint:0"<<" 0.1 coin: "<<(sum_price-int(sum_price))/0.1<<endl;
    } 
    return 0;
}
