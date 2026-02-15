#include <iostream>
using namespace std;

// 交换两个数的辅助函数（为了让主逻辑更清晰）
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 【核心】递归选择排序
// a[]: 数组
// n: 当前还需要排序的长度
void selectionSortRecursive(int a[], int n) {
    // 1. 递归出口（Base Case）：
    // 如果只剩 1 个数（或 0 个），那肯定是有序的，不用排了，直接撤！
    if (n <= 1) return;

    // 2. 【核心逻辑】找出当前范围内的最大值的下标
    // 假设第一个数是最大的
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i; // 发现更大的，记下它的下标
        }
    }

    // 3. 把最大的数，交换到当前数组的最后面 (n-1 的位置)
    // 这样，最后一个位置就定下来了
    swap(a[maxIndex], a[n - 1]);

    // 4. 【递归调用】
    // 剩下的前 n-1 个数，你们自己去玩吧！
    selectionSortRecursive(a, n - 1);
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = 8;

    cout << "排序前: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    // 调用递归函数
    selectionSortRecursive(arr, n);

    cout << "排序后: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}