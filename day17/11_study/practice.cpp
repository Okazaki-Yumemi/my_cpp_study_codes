#include <iostream>
#include <string>

class SpellCard {
private:
    std::string name; // 符卡名称
    int damage;       // 威力值

public:
    // 1. 构造函数（带默认参数，方便隐式转换）
    SpellCard(std::string n = "普通弹幕", int d = 10);

    // 2. 🌟 重载 << 运算符，发放全局友元门禁卡！
    friend std::ostream& operator<<(std::ostream& os, const SpellCard& card);
    SpellCard operator + (const SpellCard& card)const;
    bool operator > (const SpellCard& card)const;
    SpellCard& operator ++ ();
    SpellCard operator ++ (int x);
    operator int() const;
};

// =========================================================
// 🚀 下面的施工现场交给你了！请在脑子里回想咱们刚才复盘的“铁律”

// 任务 1：实现构造函数
SpellCard::SpellCard(std::string n, int d) :name(n),damage(d){
    // 【请在这里填入你的代码：完成属性的初始化】    
}

// 任务 2：实现输出流重载
// 提示：没有 friend，没有 SpellCard::，它是一个自由的全局函数！
std::ostream& operator<<(std::ostream& os, const SpellCard& card) {
    // 【请在这里填入你的代码】
    // 目标格式：输出类似 "【符卡】: 梦幻步调 || 威力: 9999"
    // 极其致命的最后一步：别忘了返回水管本尊！
    os<<"【符卡】:"<<card.name<<"||"<<"威力:"<<card.damage;
    return os;
}

SpellCard SpellCard::operator+(const SpellCard& card)const{
    SpellCard new_card;
    new_card.name=this->name + "·" +card.name;
    new_card.damage=this->damage+card.damage;
    return new_card;
}

bool SpellCard::operator>(const SpellCard& card)const{
    if(this->damage > card.damage){
        return true;
    }
    return false;
}

SpellCard& SpellCard::operator++(){
    this->damage+=1000;
    return *this;
}

SpellCard SpellCard::operator++(int x){
    SpellCard tmp= *this;

    this->damage+=1000;
    return tmp;
}

SpellCard::operator int() const{
    return this->damage;
}

// =========================================================
// 📺 主程序测试平台 (不用改，只要你上面写对了，这里就能完美运行)
int main() {
    SpellCard card1("梦幻步调", 9999);
    SpellCard card2("全人类的绯想天", 8888);

    // 见证奇迹的时刻！不需要调用 display()，直接用 << 输出对象！
    std::cout << card1 << std::endl;
    std::cout << card2 << std::endl;

    SpellCard card3;
    card3 = card1+card2;
    std::cout<<card3<<std::endl;

    return 0;
}