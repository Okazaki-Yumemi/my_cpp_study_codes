#include <iostream>

// 【对照组】：普通的类（只有私人背包）
class NormalClass {
private:
    int a;      // 普通变量 1
    double b;   // 普通变量 2
};

// 【实验组】：带静态成员的类（私人背包 + 村口黑板）
class StaticClass {
private:
    int a;              // 普通变量 1
    double b;           // 普通变量 2
    static int board;   // 静态变量（村口黑板）
};

// ⚠️ 极其重要：别忘了给静态变量在后厨（全局区）分配物理内存！
int StaticClass::board = 0; 

int main() {
    // 实例化两个对象
    NormalClass obj1;
    StaticClass obj2;

    std::cout << "========= 内存体检报告 =========" << std::endl;
    std::cout << "没有 static 的普通对象大小: " << sizeof(obj1) << " 字节\n";
    std::cout << "带有 static 的实验对象大小: " << sizeof(obj2) << " 字节\n";
    
    // 补充证明：你也可以直接测类的大小，结果是一样的
    // std::cout << "NormalClass 类的大小: " << sizeof(NormalClass) << " 字节\n";
    
    return 0;
}