#include <iostream>
using namespace std;

int find_smallest(int n,int m);

int main(){
    int x,y;
    cout<<"Please enter two integer x and y and I'll find the smallest common times of them"<<endl;
    cin>>x>>y;

    cout<<"It is: "<<find_smallest(x,y);

    return 0;
}

int find_smallest(int n ,int m){
    int count=max(m,n);
    while (true)
    {
        if(count%n==0 && count%m==0) return count;
        else count+=1;
    }
    
}