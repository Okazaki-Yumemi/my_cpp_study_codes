struct MemoryBlock {
    int startAddress; // 起始地址
    int endAddress;   // 终止地址
    MemoryBlock* next; // 指向下一条空闲记录
};
using namespace std;


// 假设链表有一个头指针 head，指向第一块空闲内存
MemoryBlock* curr = head;

// 只要当前块和下一块都存在，就继续检查
while (curr != nullptr && curr->next != nullptr) {
    MemoryBlock* nextBlock = curr->next;
    
    // 你的核心直觉：缝合线对上了！
    if (curr->endAddress == nextBlock->startAddress) {
        
        // 1. 吞噬：尾巴延伸到下一个结点的尾巴
        curr->endAddress = nextBlock->endAddress;
        
        // 2. 踢出链表：跨过被吞噬的结点
        curr->next = nextBlock->next;
        
        // 3. 回收内存：把废纸烧掉
        delete nextBlock;
        
        // 🌟 重点：这里千万不要写 curr = curr->next！
        // 留在原地，进入下一次 while 循环，看看变胖的 curr 能不能继续吞噬新的 nextBlock！
        
    } else {
        // 缝合失败：说明这两块地中间有隔断，安全前进
        curr = curr->next;
    }
}