#include <iostream>
using namespace std;

int main()
{
    const int max_size = 50;
    char array[max_size];
    
    // 【修复1】加上输入！
    cout << "请输入字符串: ";
    cin.getline(array, max_size);

    int i = 0;
    int sum = 0;

    while(array[i] != '\0')
    {
        // 情况 A: 发现数字了！开始提取
        if (array[i] >= '0' && array[i] <= '9')
        {
            int temp = 0;
            // 一直读，直到不是数字为止
            while (array[i] >= '0' && array[i] <= '9')
            {
                temp *= 10;
                temp += array[i] - '0'; // 【修复2】删掉了 +1
                i++; // 只有读了数字才往后移
            }
            sum += temp; // 把提取出来的这个数加到总和里
            // 注意：这里不需要再 i++ 了，因为上面的 while 已经把 i 停在非数字的位置了
        }
        // 情况 B: 不是数字（比如 'a' 或 空格）
        else
        {
            i++; // 直接跳过，看下一个
        }
    }

    cout << "Sum: " << sum << endl;
    return 0;
}