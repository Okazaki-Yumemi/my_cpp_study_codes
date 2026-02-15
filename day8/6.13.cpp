#include <iostream>
using namespace std;

const int maxnum = 100;

// 【修改1】加上模板头，把 int 换成 T
template <class T>
void sortarray(T arr[], int size); 

int main()
{
    // 为了演示模板的厉害，我们定义两个不同类型的数组
    int a[maxnum];     // 整数数组
    double b[maxnum];  // 小数数组

    int M, N;
    
    // --- 整数测试 ---
    cout << "Please enter size M: ";
    cin >> M;
    cout << "Enter " << M << " integers:" << endl;
    for(int i = 0; i < M; ++i) {
        cin >> a[i];
    }

    // 调用模板函数（自动识别为 int）
    sortarray(a, M); 

    cout << "Please enter N (N-th largest): ";
    cin >> N;
    // 你的逻辑是对的：从小到大排序后，第 N 大就是倒数第 N 个
    cout << "The " << N << "th biggest one is: " << a[M-N] << endl;

    return 0;
}

// 【修改2】定义模板函数
template <class T>
void sortarray(T arr[], int size)
{
    // 1. 递归出口
    if(size <= 1) return;

    // 2. 冒泡逻辑：把当前范围内最大的数“冒”到最后面 (size-1 的位置)
    for(int i = 0; i < size - 1; ++i)
    {
        // 【修改3】这里必须用 arr (参数名)，不能用全局变量 a
        if(arr[i] > arr[i+1])
        {
            T temp = arr[i]; // 临时变量也要是 T 类型
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    // 3. 递归调用：最大的已经排好了，剩下的 size-1 个继续排
    sortarray(arr, size - 1);
}