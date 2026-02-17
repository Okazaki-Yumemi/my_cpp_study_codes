#include <iostream>
#include <cstring> // 必须要有这个，用来做字符串操作 (strcmp, strcpy)
using namespace std;

const int MAX_LEN = 11; // 题目说长度10，我们开11（留一个给 \0）

// 【核心】递归函数：对 n 个字符串进行排序
// 参数 a[][MAX_LEN] 是一个二维数组，意思是“一堆字符串”
void stringSortRecursive(char a[][MAX_LEN], int n) 
{
    // 1. 递归出口：剩1个就不用排了
    if (n <= 1) return;

    // 2. 找“最大”的字符串（字典序最靠后的，比如 z 在 a 后面）
    int maxIndex = 0;
    for (int i = 1; i < n; i++) 
    {
        // strcmp(s1, s2) > 0 意味着 s1 大于 s2
        if (strcmp(a[i], a[maxIndex]) > 0) 
        {
            maxIndex = i; 
        }
    }

    // 3. 把最大的字符串换到最后面 (n-1 的位置)
    // 字符串不能直接 swap(a, b)，要用 strcpy 搬运
    if (maxIndex != n - 1) // 如果最大的本来就在最后，就不用换了
    {
        char temp[MAX_LEN];
        strcpy(temp, a[maxIndex]);   // 把大的备份
        strcpy(a[maxIndex], a[n - 1]); // 把最后的移过去
        strcpy(a[n - 1], temp);      // 把大的放最后
    }

    // 4. 递归：剩下的 n-1 个继续排
    stringSortRecursive(a, n - 1);
}

int main()
{
    // 定义一个能存 5 个单词的数组，每个单词最长 10
    char strs[5][MAX_LEN]; 
    
    cout << "请输入 5 个单词：" << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> strs[i];
    }

    // 调用排序函数
    stringSortRecursive(strs, 5);

    cout << "--- 排序后 ---" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << strs[i] << endl;
    }

    return 0;
}