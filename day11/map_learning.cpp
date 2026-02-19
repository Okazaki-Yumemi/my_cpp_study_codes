#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    //声明和赋值
    map<string,string> m;
    //赋值 如果有，修改，没有，新建
    m["Tom"] ="Boy";
    string Tom_sex=m["Tom"];
    //查与删
    //count(key) 查键在不在 if(m.count("Tom"))
    //find(key) 返回迭代器 auto it=m.find("Tom");
    //erase(key) 删除整个键值对
    //size() 键值对的数量

    //注意，用dict["不存在的key"] 的时候，会自动创建一个，如果是int 默认为0
    //所以要用 if(scores.count("Bob") && scores["Bob"]>60)) 来、前面确认存在，后面找值
     


}