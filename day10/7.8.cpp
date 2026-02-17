#include <iostream>
#include <cmath>
using namespace std;

const int maxsize = 20;

// 【重点】用 void 类型，通过 & 引用参数把计算结果“带”出去
// 这样调用完函数后，外面的 mean 和 variance 就会变
void getStats(double nums[], int size, double &mean, double &variance)
{
    // 1. 先算均值
    double sum = 0;
    for(int i = 0; i < size; ++i)
    {
        sum += nums[i];
    }
    mean = sum / size; // 修改外面的 mean 变量

    // 2. 再算方差
    double sum_sq_diff = 0;
    for(int i = 0; i < size; ++i)
    {
        // pow(a, 2) 也可以写成 a*a，效率稍微高一点点
        sum_sq_diff += pow((nums[i] - mean), 2);
    }
    variance = sum_sq_diff / size; // 修改外面的 variance 变量
}

int main()
{
    double x[maxsize];
    int size = 0;

    cout << "Please enter size (<=20):" << endl;
    cin >> size;
    
    // 安全检查：防止溢出
    if (size > maxsize) {
        cout << "Size too large!" << endl;
        return 0;
    }

    cout << "Please enter nums:" << endl;
    for(int i = 0; i < size; ++i)
    {
        cin >> x[i];
    }

    // 定义两个变量用来接结果
    double mu = 0, var = 0;

    // 调用函数，把 mu 和 var 传进去被修改
    getStats(x, size, mu, var);

    cout << "The average is: " << mu << endl;
    cout << "The variance is: " << var << endl;

    return 0;
}