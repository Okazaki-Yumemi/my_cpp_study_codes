#include <iostream>
using namespace std;

// 1. 声明要匹配，而且没必要返回值，用 void 就好
char *itos(int n);
void reverse(char *s, int size); 

int main()
{
    char *res = itos(-12345);
    cout << res << endl;
    
    // 记得释放内存，虽然小程序不释放也没事，但要养成好习惯
    delete[] res; 
    return 0;
}

// 2. 修正下标逻辑 s[size - 1 - j]
void reverse(char *s, int size)
{
    for(int j = 0; j < size / 2; ++j)
    {
        char temp = s[j];
        s[j] = s[size - 1 - j]; // 注意这里要 -1
        s[size - 1 - j] = temp;
    }
}

char *itos(int n)
{
    char *buffer = new char[20];
    int i = 0;

    // 3. 特殊处理 0，并且直接返回
    if(n == 0)
    {
        buffer[0] = '0';
        buffer[1] = '\0';
        return buffer;
    }

    // 4. 处理负数，把符号留个标志位，最后处理
    bool isNegative = false;
    if(n < 0)
    {
        isNegative = true;
        n = -n; // 转成正数方便计算
    }

    while(n > 0)
    {
        buffer[i] = (n % 10) + '0'; // 5. 取末位是 %，不是 /
        n /= 10;                    // 6. 记得把 n 缩小 10 倍！
        i++;
    }

    if(isNegative)
    {
        buffer[i] = '-'; // 把负号加在最后（因为是倒着的）
        i++;
    }

    buffer[i] = '\0'; // 7. 先封口，再翻转
    reverse(buffer, i);

    return buffer;
}