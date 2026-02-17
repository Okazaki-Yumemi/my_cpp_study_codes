#include <iostream>
#include <cstring>
using namespace std;

void deletechar_digui(char *str1, const char *str2);
void deletechar_budigui(char *str1, const char *str2);
bool shouldDelete(char c, const char *str2);

int main() 
{
    char s1[100] = "Hello World! loop loop";
    char s2[] = "lo"; // 删除所有的 'l' 和 'o'

    cout << "Original: " << s1 << endl;
    
    // deletechar_budigui(s1, s2);
    deletechar_digui(s1, s2);

    cout << "Result:   " << s1 << endl;
    return 0;
}

bool shouldDelete(char c, const char *str2)
{
    for (int i = 0; str2[i] != '\0'; ++i) 
    {
        if (str2[i] == c) return true;
    }
    return false;
}
void deletechar_budigui(char *str1, const char *str2) {
    int src = 0; // 读指针
    int dst = 0; // 写指针

    while (str1[src] != '\0') 
    {
        // 如果当前字符 不在 str2 中（即不需要删除）
        if (!shouldDelete(str1[src], str2)) 
        {
            // 就把它“抄”到写指针的位置，写指针后移
            str1[dst] = str1[src];
            dst++;
        }
        // 读指针永远往后走
        src++;
    }
    // 【关键】最后要手动封口，加上结束符
    str1[dst] = '\0';
}

void deletechar_digui(char *str1, const char *str2) {
    // 1. 基准情形：字符串结束
    if (*str1 == '\0') {
        return;
    }

    // 2. 检查当前字符 *str1 是否在 str2 中
    bool del = shouldDelete(*str1, str2);

    if (del) 
    {
        // 3. 如果要删：把后面的所有字符往前挪一位 (相当于删除 *str1)
        int i = 0;
        while (str1[i] != '\0') {
            str1[i] = str1[i+1];
            i++;
        }
        // 【关键】删完之后，不要急着 str1+1，因为挪过来的新字符可能还要删
        // 所以原地递归，继续检查当前位置
        deletechar_digui(str1, str2);
    } 
    else 
    {
        // 4. 如果不删：处理下一个字符
        deletechar_digui(str1 + 1, str2);
    }
}