//main.cpp
#include "Hero.h"


int main(){
    
    Hero Zhangsan{"Zhangsan"};
    Hero Lisi{"Lisi",500,10};

    Lisi.level_up().level_up().take_damage(50);
    
    Hero::guild_broadcast();

    Zhangsan.take_damage(90);

    goddess_bless(Zhangsan);

    Zhangsan.show_status();

    return 0;
}