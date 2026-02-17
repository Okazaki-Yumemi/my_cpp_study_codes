#include<iostream>
using namespace std;

int a[10];
bool reversecheck_budigui(int nums[10],int size);
bool reversecheck_digui(int nums[10],int size);
int main()
{
    return 0;
}

bool reversecheck_budigui(int nums[10],int size)
{
    bool judge=true;
    for(int i=0;i<size/2;++i)
    {
        if(nums[i]!=nums[size-i-1])
        {
            judge=false;
            break;
        }
    }
    return judge;
}

bool reversecheck_digui(int nums[10],int size)
{
    bool judge=true;
    if (size==1){return true;}
    if (size==2)
    {
        if(nums[0]==nums[1])
        {
            return true;
        }
    }
    else
    {
        if(nums[0]==nums[size-1])
        {
            return reversecheck_digui(nums+1,size-2);
        }
        else
        {
            return false;
        }

    }
}


