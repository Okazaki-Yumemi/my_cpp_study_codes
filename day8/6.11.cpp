#include <iostream>
using namespace std;

const int max_lines = 10;
// 【修正1】长度改为 81。因为 C 风格字符串需要最后一位存 '\0'。
// 如果定义 80，你最多只能存 79 个字。
const int max_char = 81; 

int main()
{
    int charnum = 0, numnum = 0, spacenum = 0, others = 0;
    char a[max_lines][max_char];

    cout << "请输入文章 (最多10行,每行80字)。输入空行结束：" << endl;

    int actual_lines = 0; // 记录实际输入了多少行

    // --- 输入部分 ---
    for(int i = 0; i < max_lines; ++i)
    {
        // 【修正2】使用 getline 读取一整行（包含空格）
        cin.getline(a[i], max_char);
        
        // 如果读到空行（第一位就是结束符），说明用户不想输了，提前跳出
        if (a[i][0] == '\0') {
            break;
        }
        actual_lines++;
    }

    // --- 统计部分 ---
    for(int i = 0; i < actual_lines; ++i) // 只遍历实际输入的行数
    {
        // 【修正3】循环条件增加 != '\0'，防止读到后面的垃圾内存
        for(int j = 0; a[i][j] != '\0'; ++j)
        {
            // 【修正4】逻辑串联：使用 else if
            // 【修正5】修正笔误：'i' -> 'a', '1' -> '0'
            if ((a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z'))
            {
                charnum++;
            }
            else if (a[i][j] >= '0' && a[i][j] <= '9')
            {
                numnum++;
            }
            else if (a[i][j] == ' ')
            {
                spacenum++;
            }
            else
            {
                others++;
            }
        }
    }

    cout << "Char: " << charnum << endl;
    cout << "Num: " << numnum << endl;
    cout << "Space: " << spacenum << endl;
    cout << "Others: " << others << endl;
    
    return 0;
}