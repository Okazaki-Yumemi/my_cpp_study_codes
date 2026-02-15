#include <iostream>
using namespace std;

// 【修改1】函数参数变了！
// 我们需要 low 和 high 来告诉递归函数“当前的搜索范围”
template <class T>
int binarysearch(T a[], int low, int high, T x) 
{
    // 1. 递归出口：如果左边界跑到了右边界后面，说明找遍了都没找到
    if (low > high) {
        return -1;
    }

    // 2. 算中间位置
    int mid = (low + high) / 2;

    // 3. 比较逻辑
    if (x == a[mid]) {
        return mid; // 找到了！直接返回
    }
    else if (x < a[mid]) {
        // 【核心】往左边找：范围缩小到 [low, mid-1]
        // 不需要切数组，直接传新的下标范围！
        return binarysearch(a, low, mid - 1, x);
    }
    else {
        // 【核心】往右边找：范围缩小到 [mid+1, high]
        return binarysearch(a, mid + 1, high, x);
    }
}

int main() 
{ 
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    // 调用的时候，初始范围是 0 到 9 (size - 1)
    cout << binarysearch(array, 0, 9, 5) << endl; // 应该输出 5
    cout << binarysearch(array, 0, 9, 100) << endl; // 应该输出 -1
    return 0;
}