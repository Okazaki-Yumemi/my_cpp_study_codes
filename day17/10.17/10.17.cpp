#include "10.17.h"

LinkedList::LinkedList() {
    head = nullptr; // 开业的时候，一个员工都没有（空表）
}

void LinkedList::push_front(int val) {
    // 1. 打造一个新锁头（新节点）
    Node* new_node = new Node(val); 

    // 2. 让新节点的钩子，挂住现在的头号节点
    new_node->next = head; 

    // 3. 剥夺旧 head 的头衔，把头衔传给新节点
    head = new_node; 
}

bool LinkedList::find(int val) const {
    Node* curr = head; // 派出侦察兵 curr，从头开始找
    while (curr != nullptr) { // 只要还没走到死胡同
        if (curr->data == val) {
            return true; // 抓到了！
        }
        curr = curr->next; // 顺着钩子往下一个人走 (相当于 Scheme 里的 cdr)
    }
    return false; // 全村都找遍了，没有
}

void LinkedList::print_all() const {
    Node* curr = head;
    std::cout << "链表长这样: Head -> ";
    while (curr != nullptr) {
        std::cout << curr->data << " -> ";
        curr = curr->next;
    }
    std::cout << "nullptr" << std::endl;
}


LinkedList::~LinkedList() {
    Node* curr = head;
    while (curr != nullptr) {
        Node* target_to_kill = curr; // 锁定当前倒霉蛋
        curr = curr->next;           // 赶快拿到下一把钥匙（如果先杀当前节点，next 就找不到了！）
        delete target_to_kill;       // 咔嚓
    }
    // 所有节点物理消灭完毕
}