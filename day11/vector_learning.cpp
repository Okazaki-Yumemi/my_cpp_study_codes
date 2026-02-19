#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;//空的整数数组
    vector<double> v2(10);//double v2[10]，里面全部是0.0
    vector<int> v3(5,99);//5个整数 99

    //怎么塞东西_
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v[0];
    cout<<v.at(0);
    cout<<v.size();
    //遍历——
    for (int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    //遍历2
    for (int x:v){
        cout<<x<<" ";
    }
    //size() 实际元素数目
    //capacity() 总共元素数目
}


