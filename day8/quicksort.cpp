#include <iostream>
using namespace std;

template <class T>
int divide(T a[],int low, int high)
{
    T k= a[low];

    do {
        while(low < high && a[high]>=k) --high;
        if (low<high)
        {
            a[low] =a[high];
            ++low;
        }
        while(low < high && a[low]<=k) ++low;
        if (low<high)
        {
            a[high] = a[low];
            --high;
        }
    }   while(low!=high);
    a[low]=k;

    return low;
}   


template <class T>
void quicksort(T a[],int low, int high)
{

    int mid;

    if (low>= high) return;

    mid = divide(a,low,high);

    quicksort(a , low ,mid-1);

    quicksort(a , mid+1, high);
}

int main(){
    int a[15];
    int n=10;
    cout<<"Please enter a[]"<<endl;
    for(int i=0 ; i<n;++i)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}


