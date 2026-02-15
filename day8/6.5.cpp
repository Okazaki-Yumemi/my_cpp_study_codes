#include <iostream>
#include <cstdlib>
using namespace std;

const int max_size=50;
double function(char string1[max_size])
{
    int i=0;
    char a[max_size];
    for(int i;string1[i]!='\0';++i)
    {
        if((string1[i]>='0' and string1[i]<='9')||(string1[i]=='.'))
        {
            a[i]=string1[i];
        }
        else
        {
            break;
        }
        
    }
    a[i]='\0';
    double return_number=atof(a)*2;
    return return_number;
}

double function1(char string1[])
{
    double result = 0.0;    // 存最终结果
    double decimalPlace = 1.0; // 用来处理小数位 (10, 100, 1000...)
    bool isDecimal = false; // 标记：我们是不是已经遇到小数点了？

    for(int i = 0; string1[i] != '\0'; ++i)
    {
        // 情况1：是数字 '0'~'9'
        if(string1[i] >= '0' && string1[i] <= '9')
        {
            // 核心黑科技：字符减去 '0' 就变成了真正的数字
            // 比如 '3' - '0' = 3
            int digit = string1[i] - '0'; 

            if(!isDecimal) 
            {
                // 还在整数部分：原来的数左移一位(*10)，加上新的一位
                result = result * 10 + digit;
            }
            else 
            {
                // 已经是小数部分了
                decimalPlace = decimalPlace * 10; // 小数位权值增加 (10 -> 100)
                result = result + (digit / decimalPlace);
            }
        }
        // 情况2：遇到了小数点
        else if(string1[i] == '.') 
        {
            isDecimal = true; // 打开开关，后面进来的都是小数了
        }
        // 情况3：遇到了其他乱七八糟的字符 (比如 'R')
        else 
        {
            break; // 只有遇到非数字且非小数点，才停止
        }
    }

    return result * 2; // 题目要求乘 2
}