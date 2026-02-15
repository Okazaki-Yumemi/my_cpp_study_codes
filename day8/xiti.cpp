#include <iostream>
using namespace std;

int main()
{
    int x[4][4];
    for(int i=0;i<=3;++i)
    {
        for(int j=0;j<=3;++j)
        {
            if(i==j) x[i][j]=j+1;
            else x[i][j]=0;
        }
    }
    char phi[26][26];
    int control=0;
    while(control<=25)
    {
        for(int i=0;i<=25;++i)
        {
            phi[control][i]='a'+(i+control)%26;
        }
        control+=1;
    }
}