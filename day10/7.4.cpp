#include <iostream>
#include <string>
using namespace std;

// 必须写成 char *argv[] 或 char **argv
int main(int argc, char *argv[]) 
{
    // 1. 安全检查：如果参数不够 4 个（程序名 + 数1 + 符 + 数2），直接报错
    if (argc != 4) {
        cout << "Usage: ./calc 5 + 3" << endl;
        return 1;
    }

    // 2. 获取操作数
    // argv[1] 是 "5"，用 stoi 转成 int
    int s1 = stoi(argv[1]); 
    // argv[3] 是 "3"，用 stoi 转成 int
    int s2 = stoi(argv[3]); 

    // 3. 获取运算符
    // argv[2] 是字符串 "*"，我们需要的是第一个字符
    char op = argv[2][0]; 

    int result = 0;

    switch (op)
    {
    case '*':
        result = s1 * s2;
        break;
    case '+':
        result = s1 + s2;
        break;
    case '-':
        result = s1 - s2;
        break;    
    case '/':
        if (s2 == 0)
        {
            cout << "Can't divide by zero" << endl;
            return 1; // 返回非0表示出错
        }
        result = s1 / s2;
        break;
    default:
        cout << "Invalid operator" << endl;
        return 1;
    }

    cout << result << endl;
    return 0;
}