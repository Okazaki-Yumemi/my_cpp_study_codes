#include <iostream>
#include <cmath>
using namespace std;
const int max_size=10;
int nums[max_size];
int num_arrange(int group[max_size],int size);

void selectionSortRecursive(int a[], int n) 
{

    if (n <= 1) return;

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i; 
        }
    }


    swap(a[maxIndex], a[n - 1]);


    selectionSortRecursive(a, n - 1);
}
int main()
{
    cout<<"Please enter numbers"<<endl;
    for(int i=0;i<5;++i)
    {
        cin>>nums[i];
    }
    selectionSortRecursive(nums,5);
    cout<<"The maximum arrange is:"<<num_arrange(nums,5)<<endl;
}

int num_arrange(int group[max_size],int size)
{
    if (size==0) return 0;
    else
    {
        int new_group[max_size];
        int max_of_this_turn=group[size-1];
        return max_of_this_turn*pow(10,size-1)+num_arrange(group,size-1);
    }
}