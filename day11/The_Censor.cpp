//项目 1：敏感词过滤器 (The Censor)//
//目标： 熟悉 find, replace, length。
//描述：
//用户输入一段很长的话。如果里面包含了敏感词（比如 "sb", "dead"），就把它们替换成等长的 * 号。
//示例：
//敏感词库：{"sb", "dead"}
//输入："You are a sb, you are dead."
//输出："You are a **, you are ****."
//提示： 你的 find 需要在一个循环里跑，因为一个词可能出现多次。

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> bad_words={"sb","dead","ugly"};
    string s;
    cout<<"Please enter text"<<endl;
    getline(cin,s);
    for(int i=0; i<bad_words.size();++i)
    {
        string word = bad_words[i];
        int pos =0;
        while ((pos=s.find(word))!= string::npos)
        {
            s.replace(pos,word.size(),string(word.size(),'*'));
        }
        
    }
    cout<<s<<endl;
}