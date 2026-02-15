#include <iostream>
using namespace std;

void arrange(int arr[],int size);

int main()
{
    return 0;
}

void arrange(int arr[],int size)
{
    int times=0;
    while (times<size)
    {
        for(int i=0;i<size-1;++i)
        {
            if(arr[i]>arr[i+1])
            {   int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        times+=1;
    }
    

}

void arrange_optimized(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        // 1. 左边的人：只要看到是负数，就放行 (left++)，直到抓到一个正数停下来
        while (left < right && arr[left] < 0) {
            left++;
        }

        // 2. 右边的人：只要看到是正数，就放行 (right--)，直到抓到一个负数停下来
        while (left < right && arr[right] >= 0) {
            right--;
        }

        // 3. 交换这两个“站错队”的人
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
}