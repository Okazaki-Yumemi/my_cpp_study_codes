#include <iostream>
#include "9.6.h"

int main() {
    char str1[100] = "Hello";
    char str2[] = " World";
    
    my_strcat(str1, str2);
    std::cout << "拼接结果: " << str1 << std::endl; // 应该是 "Hello World"
    
    std::cout << "长度: " << my_strlen(str1) << std::endl; // 应该是 11
    
    // 你可以继续测试 strcmp 和 substr...
    return 0;
}