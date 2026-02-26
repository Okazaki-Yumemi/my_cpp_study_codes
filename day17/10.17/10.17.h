#ifndef LINK_H
#define LINK_H
#include <iostream>
// 这就是 C++ 版的 pair，极其直白
struct Node {
    int data;       
    Node* next;     

    // 顺手写个小构造函数，方便一会 new 的时候直接塞数据
    Node(int val) {
        data = val;
        next = nullptr; // 新生出来的节点，默认后面没有连人
    }
};


class LinkedList {
private:
    Node* head; // 🌟 唯一且极其重要的地契！全公司只有老板(head)知道第一个员工在哪

public:
    LinkedList();      // 构造：公司开业
    ~LinkedList();     // 析构：公司倒闭（这个比数组难写一点哦！）

    void push_front(int val); // 在最前面插入
    bool find(int val) const; // 查找是否存在
    void print_all() const;   // 打印全表
};
#endif