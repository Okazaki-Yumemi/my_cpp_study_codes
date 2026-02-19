#include <iostream>
#include <string>

using namespace std;
void make_reverse(string &n){
    int size=n.size();
    for(int i=0;i<size/2;++i){
        char temp=n[i];
        n[i]=n[size-i-1];
        n[size-i-1]=temp;
    }

}
int main(){
    string numberA;
    string numberB;
    cout<<"please enter numberA and B"<<endl;
    cin>>numberA>>numberB;
    int i=numberA.size()-1;
    int j=numberB.size()-1;
    int carry=0;
    string res="";
    while ((i>=0 || j>=0|| carry!=0))
    {
        int n1 = (i >= 0) ? numberA[i] - '0' : 0;
        int n2 = (j >= 0) ? numberB[j] - '0' : 0;

        int sum=n1+n2+carry;

        carry=sum/10;
        
        res.append(to_string(sum%10));

        --i;
        --j;
    }
    make_reverse(res);
    cout<<"Sum : "<<res<<endl;
}

