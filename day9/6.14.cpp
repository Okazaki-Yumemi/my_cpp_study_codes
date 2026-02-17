#include <iostream>
#include <cmath>
using namespace std;

char a[3][3];

// 修改返回值：返回 'X' 表示X赢，'O' 表示O赢，'N' 表示没赢
char check_line(char b[3][3]); 

int main()
{
    // 1. 读取输入
    // 这里的提示语如果是做题系统提交，最好注释掉，否则可能被判错
    // cout<<"请输入当前战局情况..."<<endl; 
    
    int xnum = 0, onum = 0;
    for(int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> a[i][j];
            // 统计数量
            if (a[i][j] == 'x') xnum++;
            else if (a[i][j] == 'o') onum++;
        }
    }

    // 2. 基础数量检查 (Invalid 情况 1)
    // x 先手，所以 x 只能等于 o 或者比 o 多 1
    if (!(xnum == onum || xnum == onum + 1)) 
    {
        cout << "invalid" << endl;
        return 0;
    }

    // 3. 检查谁赢了
    // 这里我们不仅要看有没有人赢，还要看是谁赢
    bool x_wins = false;
    bool o_wins = false;

    // 检查行
    for (int i = 0; i < 3; i++) {
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '-') {
            if (a[i][0] == 'x') x_wins = true;
            if (a[i][0] == 'o') o_wins = true;
        }
    }
    // 检查列
    for (int i = 0; i < 3; i++) {
        if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '-') {
            if (a[0][i] == 'x') x_wins = true;
            if (a[0][i] == 'o') o_wins = true;
        }
    }
    // 检查对角线
    if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] != '-') {
        if (a[1][1] == 'x') x_wins = true;
        if (a[1][1] == 'o') o_wins = true;
    }
    if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != '-') {
        if (a[1][1] == 'x') x_wins = true;
        if (a[1][1] == 'o') o_wins = true;
    }

    // 4. 复杂逻辑判定 (Invalid 情况 2 & 3)
    
    // 如果两个人都赢了 -> 不可能 -> invalid
    if (x_wins && o_wins) {
        cout << "invalid" << endl;
        return 0;
    }

    // 如果 X 赢了，X 的数量必须比 O 多 1 (因为 X 落下最后一子)
    if (x_wins) {
        if (xnum == onum + 1) cout << "win" << endl;
        else cout << "invalid" << endl; // X 赢了但 xnum==onum，说明 O 又下了一子，这是违规的
        return 0;
    }

    // 如果 O 赢了，数量必须相等 (因为 O 落下最后一子)
    if (o_wins) {
        if (xnum == onum) cout << "lose" << endl;
        else cout << "invalid" << endl; // O 赢了但 xnum>onum，说明 X 又下了一子
        return 0;
    }

    // 5. 没人赢的情况
    if (xnum + onum == 9) {
        cout << "tie" << endl; // 棋盘满了
    } else {
        cout << "ongoing" << endl; // 棋盘没满
    }

    return 0;
}