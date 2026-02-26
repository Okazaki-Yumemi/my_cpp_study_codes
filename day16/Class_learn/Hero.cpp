//Hero.cpp
#include <iostream>
#include "Hero.h"

int Hero::living_heroes=0;

Hero::Hero(std::string n ,int h, int l):name(n),hp(h),level(l)
{
    std::cout<<"冒险者["<<name<<"]降临了世界!";
    living_heroes+=1;
    std::cout<<"初始HP: "<<h<<std::endl;
}



void Hero::take_damage(int damage){
    hp-=damage;
    std::cout<<"["<<name<<"]受到了 "<<damage<<" 点伤害!";

    if(hp<0){
        hp=0;
    }
    std::cout<<"当前HP: "<<hp<<std::endl;
}

void Hero::show_status() const{
    std::cout<<"["<<name<<"] LV."<<level<<"| HP: "<<hp<<std::endl;
}

Hero& Hero::level_up(){
    level+=1;
    hp+=20;
    std::cout<<"["<<name<<"] 升级了! 当前等级: LV."<<level<<"| HP: "<<hp<<std::endl;
    return *this;
}

void Hero::guild_broadcast(){
    std::cout<<"公会广播: 当前活跃的冒险者数量为 "<<living_heroes<<" 人！"<<std::endl;
}

void goddess_bless(Hero& h){
    h.hp=9999;
    std::cout<<"女神赐福了 ["<<h.name<<"]! HP 暴涨至9999!"<<std::endl;
}

Hero::~Hero()
{
    living_heroes-=1;
    if (living_heroes<0)
    {
        living_heroes=0;
    }
    
    std::cout<<"冒险者["<<name<<"]化作了星尘!"<<std::endl;
}