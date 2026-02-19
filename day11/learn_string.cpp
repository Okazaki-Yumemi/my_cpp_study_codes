#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="Hello";
    string s2(5,'a');
    string s3=s1;
    //cin >>s 读到空格就停止
    // getline(cin,s)读一整行，直到回车
    //string 的输入
    string s="";
    string s11="";
    cout<<"请输入s"<<endl;
    cin>>s;
    cout<<"请输入s11"<<endl;
    getline(cin,s11);
    cout<<"s:"<<s<<endl<<"s11"<<s11<<endl;
    //查找
    size_t pos =s.find("Key");
    //string 的修改 增长
    s +=" World";
    s.append("!!!");
    //string 的切片；
    s.substr(0,3); //place length
    //插入
    s.insert(1,"ABC");//在place 1 插入“ABC”
    s.replace(pos,3,"NewWord");
    //转化
    string s_num=to_string(123);
    int n= stoi("114514");
    double d = stod("114.114");
    return 0;
    
}
//查询
//size()  返回长度， int len =s.size();
//length() 返回长度 int len = s.length();
//empty() 判断是不是空 if (s.empty()) return;
// clear() 清空字符串 s.clear();

//增删改

// + += 拼接
// append()
//push_back() 在后面增加一个字符
// insert(index,"abc")
// erase(start,length)
// replace(pos,len,"new")
// 常用—— while((pos= s.find("key_word"))!= string::npos){
// s.replace(pos,2,"**")} string::npos 是-1的无符号形式 是C++内最大整数。

//查找截取
// operator[] 访问下表 char c = s[0];
// at()  char c =s.ar(0); 越界会报错
// substr(start_index,length)
// find()  int pos= s.find("key");
// rfind() int pos=s.rfind("key");

//变身
// c_str()   转化成C 语言风格的 const char* 
// to_string()  
// stoi()
// stod()