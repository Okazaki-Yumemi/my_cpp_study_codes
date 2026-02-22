//链表的构成
//宝藏——数据 data
//下一张藏宝图 next指针

//核心命门——先签手、再放手
//插入的时候，不能让前面的节点松手、不然后面那一大堆就全部丢了
//所以要先让新节点抓住后面的，再让前面的节点抓住新节点
//删除的时候，先用一个临时指针抓住要杀掉的节点，让大部队绕过之
//然后再让delete 临时指针销毁这些东西

//寻址——O(N)

//第一个方法——head指针
//在真正的第一个数据前面增加一个new 空盒子

//第二个方法 双指针
//slow和fast slow走一步、fast走两步
//当fast到达终点的时候slow一定处于中点
//判断环——如果是循环的，那么fast一定会套圈追上slow

//多指针微操//三指针逆置
//把单链表原地反转，需要prev,curr,next
//先用next记住后路，然后让curr->next 掉头反指prev
//最后prev和curr齐刷刷向前跨一步

//构造
struct Node
{
    int data;//数据
    Node* next;//下一个位置
};

#include <iostream>
//遍历——基础
void traverse(Node* head){
    Node* curr=head;
    while (curr!= nullptr){
        std::cout<<curr->data<<' '<<std::endl;
        curr = curr->next;//顺藤摸瓜
    }
}

//插入
void insertAfter(Node* p ,int value){
    if( p == nullptr) return;

    Node* newNode=new Node;
    newNode->data=value;

    //不能反
    newNode->next=p->next;
    p->next = newNode;
}

//删除
void deleteAfter(Node *p){
    
    if (p== nullptr || p->next ==nullptr) return;
    //后边没人 删个寂寞

    Node* target=p->next; //抓住要被删的
    p->next = target ->next; //大部队直接绕开

    delete target; //删除
}

//删除整条链表
void destoryList(Node* &head){
    Node* curr=head;
    Node* temp=nullptr;

    while (curr != nullptr)
    {
        temp = curr->next; //记住下一节
        delete curr;    //把刚刚的炸了
        curr = temp;    //走向下一节
    }
    head = nullptr;  //大门上锁
    
}

//删除某个特定的值
// 假设传进来的 dummyHead 是我们提前建好的“哨兵”
void deleteSome(Node* dummyHead, int n) {
    Node* p = dummyHead;
    
    // 必须用 &&！保证 p 本身安全，且 p 后面确实还有人
    while (p != nullptr && p->next != nullptr) {
        Node* next_ptr = p->next;
        
        if (next_ptr->data == n) {
            // 你的完美逻辑：牵手 -> 毁灭
            p->next = next_ptr->next; 
            delete next_ptr;          
            
            // 🌟 重点：这里不写 p = p->next，保持原地不动，迎接自动补位上来的新结点！
        } else {
            // 安全：下一个人不是我们要杀的，放心往下走
            p = next_ptr; 
        }
    }
}