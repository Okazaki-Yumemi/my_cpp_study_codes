#include <algorithm>
#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main(){
    pair <int,string> p1;
    p1.first=1;
    p1.second="Stage 1";

    pair <int,string> p2= make_pair(2,"Stage 2");

    pair <int,string> p3= {3,"Stage3"};

    //可以让函数返回两个值
    // return {avg,var};

    // 存的是对子：<楼层, 能耗>
    vector<pair<int, double>> elevator_data;
    
    elevator_data.push_back({5, 120.5});
    elevator_data.push_back({2, 45.2});
    elevator_data.push_back({10, 310.8});

    // ✨ 魔法来了：对 vector<pair> 进行 sort
    // C++ 会默认先按 first (楼层) 比较。
    // 如果 first 一样，再按 second (能耗) 比较。完全自动！
    sort(elevator_data.begin(), elevator_data.end());

    cout << "按楼层从低到高排序后：" << endl;
    for (auto p : elevator_data) {
        cout << "楼层: " << p.first << ", 能耗: " << p.second << endl;
    }
    return 0;
}