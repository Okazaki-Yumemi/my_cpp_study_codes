#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>
#include <functional>
using namespace std;

int main(){
    string s="Hello world!";
    vector<int> number_group={1,4,6,4,3,7,8,9,5,9,0,1,2};
    vector<int> v={123,214,24,23,1213,6};
    //迭代器范围 
    sort(number_group.begin(),number_group.end());//排序 从小到大
    sort(number_group.begin(),number_group.end(),greater<int>());//排序 从大到小;
    //查找和计数
    auto it = find(v.begin(),v.end(),5);//找不到返回end
    int n=count(v.begin(),v.end(),5);//计数
    int maxVal=*max_element(v.begin(),v.end());//最大值，返回的是指针
    int minVal=*min_element(v.begin(),v.end());//最小值，返回的是指针
    //运算
    int sum=accumulate(v.begin(),v.end(),0);//0是初始值，如果要算浮点，用0.0
    //替换
    fill(v.begin(),v.end(),0);
    replace(v.begin(),v.end(),5,99);//把所有的A换成B

    //进阶部分
    sort(v.begin(),v.end(),[](int a,int b){
        return a>b; //如果 a>b，顺序正确，降序
    });

    vector<int> scores={80,50,90,40,100};
    int failNum=count_if(scores.begin(),scores.end(),[](int score){
        return score<60; //条件成立，算一个
    });

    //小作业：给你一个包含杂乱数据的 vector：{10, -5, 20, -1, 30, -5}。
    //请编写程序完成以下任务：

    //把所有的 -5 替换成 0。

    //从大到小排序。

    //输出最大的那个数。
    vector<int> numbersss={10,-5,20,-1,30,-5};
    replace(numbersss.begin(),numbersss.end(),-5,0);
    sort(numbersss.begin(),numbersss.end(),[](int a,int b){
        return a>b;//从大到小
    });
    for(int x:numbersss){
        cout<<x<<" ";
    }
    cout<<endl<<"Biggest: "<<numbersss[0]<<endl;
    return 0;




}