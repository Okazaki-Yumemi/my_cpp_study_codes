#include "10.11.h"

// 构造：批地皮，但不放人
OrderedList::OrderedList(int cap) : length(0), capacity(cap) {
    ptr = new int[capacity]; 
}

// 🛡️ 深拷贝：照抄容量和长度，重新批地，完美搬砖
OrderedList::OrderedList(const OrderedList& other) {
    length = other.length;
    capacity = other.capacity;
    ptr = new int[capacity];
    for (int i = 0; i < length; i++) {
        ptr[i] = other.ptr[i];
    }
}

// 🛡️ 赋值重载：防自爆、拆旧房、批新房、搬砖
OrderedList& OrderedList::operator=(const OrderedList& other) {
    if (this == &other) return *this;
    delete[] ptr;
    
    length = other.length;
    capacity = other.capacity;
    ptr = new int[capacity];
    for (int i = 0; i < length; i++) {
        ptr[i] = other.ptr[i];
    }
    return *this;
}

// 💀 析构：死神收尸
OrderedList::~OrderedList() {
    delete[] ptr;
}

// 🚀 核心黑科技：翻倍扩容手术
void OrderedList::expand_capacity() {
    capacity *= 2; // 容量直接翻倍！
    int* new_ptr = new int[capacity]; // 批超级大地皮
    for (int i = 0; i < length; i++) {
        new_ptr[i] = ptr[i]; // 搬砖
    }
    delete[] ptr; // 拆除旧小平房
    ptr = new_ptr; // 换上新门牌
}

// 🌟 核心 1：永远保持有序的插入
void OrderedList::insert(int val) {
    // 1. 如果房子满了，先强行扩容！
    if (length == capacity) {
        expand_capacity();
    }

    // 2. 从最后一个房间开始往前找，给新来的大佬腾位置（这里默认从小到大排）
    int i = length - 1;
    
    // 只要前面的数字比新来的大佬 (val) 大，就把前面的数字往后挪一格
    while (i >= 0 && ptr[i] > val) {
        ptr[i + 1] = ptr[i];
        i--;
    }

    // 3. 终于找到了比 val 小的数，那个空出来的坑 (i + 1) 就是专座！
    ptr[i + 1] = val;
    length++; // 登记人口 +1
}

// 🌟 核心 2：无情抹除
void OrderedList::remove(int val) {
    int target_idx = -1;
    // 1. 找到要删的人在哪
    for (int i = 0; i < length; i++) {
        if (ptr[i] == val) {
            target_idx = i;
            break;
        }
    }

    // 没找到直接走人
    if (target_idx == -1) return; 

    // 2. 把目标后面的所有人，统一往前挪一格（直接踩死目标）
    for (int i = target_idx; i < length - 1; i++) {
        ptr[i] = ptr[i + 1];
    }
    length--; // 登记人口 -1
}

// 🌟 核心 3：极其降维打击的第 N 大数字获取！
int OrderedList::get_nth_largest(int n) const {
    // 既然从小到大排好了，第 1 大就是倒数第 1 个 (length - 1)
    // 第 n 大就是倒数第 n 个 (length - n)
    if (n > 0 && n <= length) {
        return ptr[length - n]; 
    }
    return -1; // 越界报错保护
}

// 打印验证
void OrderedList::print_all() const {
    std::cout << "[ ";
    for (int i = 0; i < length; i++) {
        std::cout << ptr[i] << " ";
    }
    std::cout << "]" << std::endl;
}