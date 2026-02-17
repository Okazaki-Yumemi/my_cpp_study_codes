#include <iostream>
using namespace std;
const int maxsize=30;
char a[maxsize];
int main()
{
    cout<<"Please enter the ISBN"<<endl;
    cin.getline(a,maxsize);
    int i=0;
    int nums[maxsize];
    int len=0;
    while (a[i]!='\0')
    {
        if(a[i]>='0' && a[i]<='9')
        {
            nums[len]=int(a[i]-'0');
            len+=1;
        }
        i+=1;
    }
    if(len==10)
    {
        int sum=0;
        for(int j=0;j<10;++j)
        {
            sum+=nums[j]*(10-j);
        }
        if (sum%11==0) cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
    }
    if(len==13)
    {
        int sums=0;
        for(int j=0;j<13;++j)
        {
            if (j%2==0) sums+=nums[j]*1;
            else sums+=nums[j]*3;

        }
        if(sums%10==0) cout<<"Valid!"<<endl;
        else cout<<"Invalid"<<endl;
    }
}