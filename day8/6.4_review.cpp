#include <iostream>
using namespace std;

// 为了方便演示，我稍微修改了函数签名，让它在函数内部打印结果
void makechange(int coins[], int differentCoins, int maxChange, int coinUsed[]) 
{
    // 【新增】记账本：lastCoin[k] 记录凑出 k 分钱时选用的最后一枚硬币
    int lastCoin[100]; // 假设 maxChange 不超过 100，实际可用动态分配

    coinUsed[0] = 0;

    for (int cents = 1; cents <= maxChange; cents++)
    {
        int minCoins = cents;
        lastCoin[cents] = 1; // 默认假设：最后一步加的是 1 分硬币（对应 minCoins = cents）

        for (int j = 1; j < differentCoins; j++)
        {
            if (coins[j] > cents) continue;
            
            if (coinUsed[cents - coins[j]] + 1 < minCoins)
            {
                minCoins = coinUsed[cents - coins[j]] + 1;
                // 【核心修改】记录下：在这个最优解里，我们最后用的是 coins[j]
                lastCoin[cents] = coins[j]; 
            }
        }
        coinUsed[cents] = minCoins;
    }

    // --- 打印结果部分 (Backtracking) ---
    cout << "凑出 " << maxChange << " 分钱最少需要 " << coinUsed[maxChange] << " 枚硬币。" << endl;
    cout << "解的组成是: ";
    
    int temp = maxChange;
    while (temp > 0)
    {
        // 1. 查账本：凑出 temp 分钱，最后用的是哪枚？
        int coinValue = lastCoin[temp]; 
        cout << coinValue << " ";

        // 2. 回溯：减去这枚硬币，看看剩下的钱是怎么凑的
        temp = temp - coinValue;
    }
    cout << endl;
}

int main()
{
    int coins[] = {1, 5, 10}; // 假设有 1, 5, 10 分硬币
    int coinUsed[20]; // 假设我们要凑 12 分
    makechange(coins, 3, 12, coinUsed);
    return 0;
}