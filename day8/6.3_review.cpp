#include <iostream>
using namespace std;

// 【修正1】参数要两个：目标(dest) 和 源(src)
// 【修正2】不需要 return 数组，用 void 即可（或者返回 char* 指向 dest 也可以）
void stringCopy(char dest[], char src[]) 
{
    int i = 0;
    // 【核心逻辑】一直复制，直到遇到字符串结束符 '\0'
    while (src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }
    // 【非常重要】手动给目标字符串加上结束符！
    dest[i] = '\0';
}

int main()
{
    char mySource[] = "Hello";
    char myDest[20]; // 主函数自己负责准备好足够的空间

    stringCopy(myDest, mySource); // 把 mySource 复制进 myDest

    cout << "复制结果: " << myDest << endl;
    return 0;
}