#include <iostream>
#include <string>
using namespace std;

// 1. 修正后的闰年判断
bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

string julianToDate(int year, int day) {
    // 2. 表驱动法：定义每月天数
    // 为了方便，下标 1 对应 1 月，下标 0 放个占位符
    int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string monthNames[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // 3. 如果是闰年，把 2 月改成 29 天
    if (isLeap(year)) {
        monthDays[2] = 29;
    }

    // 4. 检查非法输入 (比如平年 366 天，或者 day <= 0)
    int totalDays = isLeap(year) ? 366 : 365;
    if (day <= 0 || day > totalDays) {
        return "NULL"; // 题目要求返回 NULL
    }

    // 5. 核心逻辑：用减法找月份
    int i = 1;
    for (i = 1; i <= 12; ++i) {
        if (day <= monthDays[i]) {
            break; // 剩下的天数不够减了，说明就在这个月！
        }
        day -= monthDays[i]; // 减去当前月的天数，往后推
    }

    // 6. 拼接结果
    // 此时 i 是月份，day 是剩下的日期
    return monthNames[i] + " " + to_string(day);
}

int main() {
    cout << julianToDate(2023, 60) << endl; // 平年 3月1日 (31+28+1)
    cout << julianToDate(2024, 60) << endl; // 闰年 2月29日 (31+29)
    cout << julianToDate(2023, 370) << endl; // 非法
    return 0;
}