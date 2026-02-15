#include <iostream>
#include <cmath> // 实际上不需要，但如果要优化范围可以用
using namespace std;

int main()
{
    const int MAX = 1001; // 我们要存到 1000，所以开 1001
    int a[MAX];

    // 1. 初始化：把墙上的数字都写好 (a[i] = i)
    // 忽略 0 和 1，直接从 2 开始
    for(int i = 2; i < MAX; ++i)
    {
        a[i] = i;
    }

    // 2. 开始筛选 (Sieve)
    // 只要遍历到根号 1000 其实就够了，但遍历到 1000 也没错
    for(int i = 2; i < MAX; ++i)
    {
        // 如果当前这个数不是 0 (说明它是素数，还没被划掉)
        if(a[i] != 0)
        {
            // 【核心优化】
            // 你的思路：从 i+1 开始挨个 % 
            // 优化思路：直接从 2倍的i 开始，每次跳 i 步
            // 比如 i=2，j 就分别是 4, 6, 8, 10...
            for(int j = i * 2; j < MAX; j += i)
            {
                a[j] = 0; // 把它划掉（置0）
            }
        }
    }

    // 3. 输出幸存者
    int count = 0; // 只是为了排版好看，每行打印10个
    for(int i = 2; i < MAX; ++i)
    {
        if(a[i] != 0) // 如果没被划掉
        {
            cout << a[i] << "\t";
            count++;
            if(count % 10 == 0) cout << endl; // 每10个换行
        }
    }
    
    return 0;
}