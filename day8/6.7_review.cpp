#include <iostream>
#include <cmath> // 用来算 (-1) 的几次方
using namespace std;

// 定义一个最大的维度，方便传参
const int MAX = 10;

// 函数声明：计算 n 阶行列式的值
double getDeterminant(double mat[MAX][MAX], int n);

int main()
{
    double a[MAX][MAX];
    // 虽然题目是5阶，但为了通用，我们代码里支持任意小于MAX的阶数
    int n = 5; 

    cout << "Please enter a " << n << "x" << n << " matrix:" << endl;
    for(int i = 0; i < n; ++i)
    {
        cout << "The " << i + 1 << "th row: "; // 习惯上说第1行而不是第0行
        for(int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }

    double result = getDeterminant(a, n);
    cout << "The value of the determinant is: " << result << endl;

    return 0;
}

// 【核心函数】递归计算行列式
double getDeterminant(double mat[MAX][MAX], int n)
{
    // 1. 递归出口（Base Case）
    if (n == 1) {
        return mat[0][0];
    }
    if (n == 2) {
        // 二阶行列式：主对角线 - 副对角线
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    }

    double sum = 0; // 累加结果
    double temp[MAX][MAX]; // 用来存临时的子矩阵(余子式)

    // 2. 按照第一行展开 (Laplace Expansion)
    // 遍历第一行的每一个元素 mat[0][i]
    for (int i = 0; i < n; i++)
    {
        // 构造子矩阵：划掉第 0 行，划掉第 i 列
        int sub_i = 0; // 子矩阵的行下标
        for (int r = 1; r < n; r++) // 原矩阵从第1行开始看（因为第0行被划掉了）
        {
            int sub_j = 0; // 子矩阵的列下标
            for (int c = 0; c < n; c++) // 遍历原矩阵的所有列
            {
                if (c == i) continue; // 如果是当前划掉的列，跳过
                
                temp[sub_i][sub_j] = mat[r][c];
                sub_j++;
            }
            sub_i++;
        }

        // 3. 递归公式： sum += (-1)^k * 元素 * 余子式的值
        // pow(-1, i) 就是正负号交替：正 负 正 负...
        double sign = (i % 2 == 0) ? 1.0 : -1.0;
        
        // 这里的 getDeterminant(temp, n - 1) 就是最精彩的递归！
        // 自己调用自己，去算那个小一号矩阵的值
        sum += sign * mat[0][i] * getDeterminant(temp, n - 1);
    }

    return sum;
}