#include "10.11.h"
#include <iostream>

int main() {
    OrderedList list;
    
    // 乱序塞进去，看看它是不是真的这么聪明！
    list.insert(50);
    list.insert(10);
    list.insert(30);
    list.insert(20);
    list.insert(40);
    
    std::cout << "插入 5 个乱序数字后: ";
    list.print_all(); // 期望输出: [ 10 20 30 40 50 ]

    // 触发隐藏的翻倍扩容！
    list.insert(25); 
    std::cout << "插入 25 (触发扩容): ";
    list.print_all(); // 期望输出: [ 10 20 25 30 40 50 ]

    std::cout << "第 2 大的数字是: " << list.get_nth_largest(2) << std::endl; // 期望: 40

    list.remove(30);
    std::cout << "删掉 30 之后: ";
    list.print_all(); // 期望输出: [ 10 20 25 40 50 ]

    return 0;
}