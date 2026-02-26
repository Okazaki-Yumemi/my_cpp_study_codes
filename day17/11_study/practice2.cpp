#include <string>
#include <iostream>

class DanmakuPool
{
private:
    int size;
    int* damages;
public:
    DanmakuPool(int sz , int default_dmg);
    DanmakuPool(DanmakuPool&& other);
    DanmakuPool(const DanmakuPool &ohter);
    DanmakuPool& operator =(const DanmakuPool& other);
    DanmakuPool& operator =(DanmakuPool&& other);
    ~DanmakuPool();
    friend std::ostream& operator<<(std::ostream& os,const DanmakuPool& pool);
};

DanmakuPool::DanmakuPool(int sz,int default_dmg):size(sz)
{
    damages=new int[size];
    for (int i = 0; i < size; i++)
    {
        damages[i]=default_dmg;
    }   
}

DanmakuPool::DanmakuPool(const DanmakuPool& other){
    this->size=other.size;
    this->damages = new int[this->size];
    for (int i = 0; i < size; i++)
    {
        this->damages[i]=other.damages[i];
    }
}

DanmakuPool::DanmakuPool(DanmakuPool &&other){
    this->size=other.size;
    this->damages=other.damages;
    other.damages =nullptr;
    other.size=0;
}

DanmakuPool& DanmakuPool::operator=(const DanmakuPool& other){
    if (this==&other) return *this;
    else{
        delete[] this->damages;

        this->size=other.size;

        this->damages=new int[this->size];

        for (int i = 0; i < size; i++)
        {
            this->damages[i]=other.damages[i];
        }
        
        return *this;
    }
}

DanmakuPool& DanmakuPool::operator=(DanmakuPool &&other){
    if(this ==& other) return *this;
    else{
        delete[] this->damages;
        this->size=other.size;
        this->damages=other.damages;
        other.damages = nullptr;
        other.size = 0;
    }
    return *this;
}
DanmakuPool::~DanmakuPool()
{
    delete[] damages;
    std::cout<<"弹幕池已被销毁! 空间已回收！\n";
}

std::ostream& operator << (std::ostream& os,const DanmakuPool& pool){
    os<<"弹幕数量:"<<pool.size<<"||威力列表:";
    for(int i=0 ;i <pool.size;++i){
        os<<" "<<pool.damages[i]<<" ";
    }
    return os;
}


int main() {
    std::cout << "--- 实验开始 ---\n";
    
    DanmakuPool yumemi_pool(5, 99); 
    DanmakuPool chiyuri_pool(3, 10); // 千百合自带一个破旧的弹幕池
    
    std::cout << "初始状态千百合: " << chiyuri_pool << "\n";
    
    // 🎯 挑战 1：深拷贝赋值
    std::cout << "\n--- 梦美执行深拷贝覆盖 ---\n";
    chiyuri_pool = yumemi_pool; 
    std::cout << "覆盖后千百合: " << chiyuri_pool << "\n";
    
    // 🎯 挑战 2：移动赋值 (利用匿名临时对象打劫！)
    std::cout << "\n--- 梦美祭出临时终极弹幕池打劫 ---\n";
    chiyuri_pool = DanmakuPool(10, 9999); 
    std::cout << "打劫后千百合: " << chiyuri_pool << "\n";

    // 🎯 挑战 3：防自爆测试
    std::cout << "\n--- 千百合自我赋值防爆测试 ---\n";
    chiyuri_pool = chiyuri_pool; 
    std::cout << "防爆测试存活: " << chiyuri_pool << "\n";

    std::cout << "--- 实验结束 ---\n";
    return 0; 
}