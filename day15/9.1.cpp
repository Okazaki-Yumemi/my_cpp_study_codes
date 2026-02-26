#include <cmath>
#include <iostream>

using namespace std;

bool prime_judge(int n){
    if (n<2) return false;
    if (n==2) return true;

    else{
        for(int i=2;i<=sqrt(n);++i){
            if (n%i==0)
            {
                return false;
            }
            
        }
    }
    return true;
}

int main(){
    cout<<"Please enter the small one and the bigger one"<<endl;
    int n1,n2;
    cin>>n1>>n2;

    for(int i=n1;(i<=n2);++i){
        if(i%2!=0) continue;
        for(int p=1;p<i/2;++p){
            if(prime_judge(p)){
                if(prime_judge(i-p)){
                    cout<<p<<" + "<<i-p<<" = "<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}