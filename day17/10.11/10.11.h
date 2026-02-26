#ifndef ORDEREDLIST_H
#define ORDEREDLIST_H
#include <iostream>

class OrderedList {
private:
    int* ptr;       // 核心地契
    int length;     // 当前实际存了几个数
    int capacity;   // 当前这块地皮最大能容纳几个数

    // 内部机密操作：当 length == capacity 时触发的扩容手术
    void expand_capacity(); 

public:
    // 默认初始给你 5 个空位
    OrderedList(int cap = 5);
    
    // 🛡️ 极其严密的深拷贝护盾（三法则）
    OrderedList(const OrderedList& other);
    OrderedList& operator=(const OrderedList& other);
    ~OrderedList();

    // 甲方要求的四大核心功能
    void insert(int val);
    void remove(int val);
    int get_nth_largest(int n) const;
    void print_all() const;
};

#endif