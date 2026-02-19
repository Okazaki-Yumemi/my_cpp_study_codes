#include <set>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;
//set 的性质：自动去重——自动排序——只读(不能修改，只能先删除，再添加)

int main(){
    set<int> s;
    //插入元素
    s.insert(5);
    s.insert(114);
    s.insert(-1);
    //删除元素
    s.erase(-1);//删除某个值
    s.erase(s.begin());//删除迭代器指向的元素
    s.clear();//清空
    //查找
    if (s.count(10)){ cout<<' ';}//判断在不在，返回1 or 0;
    auto it= s.find(10);//返回迭代器;
    if (s.empty()){ cout<<" ";}//判断空
    int n =s.size(); //个数

    //vector 转化为 set:
    vector<int> v={1,1,1,5,5,5,7,8,9,6,4,6};
    set<int> s1(v.begin(),v.end());

    //不能写 s[0] 因为set内部不是连续内存，只能用迭代器 （for(auto x:s)）
    return 0;


}