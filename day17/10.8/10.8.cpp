//10.8.cpp
#include "10..8.h"

Joseph::Joseph(int n,int dead):playernum(n),dead_num{dead}
{
    
}

void Joseph::simulate() {
    std::cout << "============ 死亡游戏开始 ===========" << std::endl;

    std::vector<int> player;
    // 玩家从 1 号排到 n 号
    for (int i = 1; i <= playernum; i++) {
        player.push_back(i);
    }
    
    int i = 0; // 死神的镰刀初始指向 0 号下标

    while (player.size() > 1) {
        // 算出下一个倒霉蛋的下标（你的神级公式）
        i = (i + dead_num - 1) % player.size();
        
        // ⚠️ 必须在开枪(erase)之前，大声喊出他的名字！
        std::cout << player[i] << "号玩家被处决!" << std::endl;
        
        // 开枪，抹除数据
        player.erase(player.begin() + i);
    }

    std::cout << "🎉 最后存活的玩家: " << player[0] << " 号！" << std::endl;
}

Joseph::~Joseph()
{
}