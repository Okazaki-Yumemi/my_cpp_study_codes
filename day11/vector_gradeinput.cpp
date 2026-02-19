#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> scores; // 1. 定义一个空 vector
    int input;
    
    cout << "请输入成绩 (-1 结束):" << endl;
    
    // 2. 写一个 while 循环
    while (true) {
        cin >> input;
        if (input == -1) break;
        // TODO: 把 input 塞进 scores 里 (用 push_back)
        scores.push_back(input);
    }
    
    if (scores.empty()) return 0; // 防止没人输入，除以0崩溃

    // 3. 算平均分 (遍历 vector)
    double sum = 0;
    // TODO: 写循环累加 sum
    for(int i=0;i<scores.size();++i){
        sum+=scores[i];
    }

    cout<<"平均分为: "<<sum/scores.size()<<endl;
    
    // 4. 输出不及格的
    cout << "不及格的分数有: ";
    // TODO: 再遍历一次，找到 < 60 的打印出来
    for(int x:scores){
        if(x<60){
            cout<<x<<" ";
        }
    }
    return 0;
}

//进阶
//#include <algorithm>
//从小到大 sort(scores.begin(),scores.end())
//sort(scores.begin(),scores.end(),greater<int>()); 如果要从大到小
//scores.pop_back() 

//多维度列表： 
// 意思是：一个 vector，它里面的每个元素，都是一个 vector<int>
//vector<vector<int>> matrix;
//int rows = 3;
//int cols = 4;

// 一行代码搞定 3行4列，并且全部初始化为 0！
// 语法解读：vector<vector<int>> 名字(行数, vector<int>(列数, 初始值));
//vector<vector<int>> matrix(rows, vector<int>(cols, 0));

// 现在你可以直接用了
//matrix[0][0] = 99;
//cout << matrix[2][3]; // 输出 0

//如果你一开始不知道有多少行，想一行一行加进去，可以用 push_back。
//vector<vector<int>> matrix; // 空的

// 搞一个小 vector (一行)
//vector<int> row1 = {1, 2, 3}; 
//vector<int> row2 = {4, 5, 6};

// 把整行塞进去
//matrix.push_back(row1);
//matrix.push_back(row2);

// 现在 matrix 就是:
// 1 2 3
// 4 5 6