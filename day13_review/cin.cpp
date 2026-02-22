#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
//空格、换行免疫输入

    int n;
    cin>>n;
    //自动跳过space tab Enter

    //读入原生数组
    int arr[100];
    for (int i=0; i<n;++i){
        cin>>arr[i];
    }

    //读入vector
    vector<int> vec(n);
    for(int i=0; i<n;++i){
        cin>>vec[i];
    }

//String 的读取
    string word;
    cin>>word;
    //"如果输入Hello World"只会得到Hello
    //用于读单词
    string line;
    getline(cin,line);
    //里面是连续的一行内容，读到换行符才会停止。

    //混合用的时候需要注意，比如现在输入
    //5
    //Hello
    int n;
    string s;
    cin>>n;
    getline(cin,s);
    //输入5之后回车，getline会读到回车，直接变成空字符串
    //solu:
    cin>>n;
    cin.ignore();//把缓冲区的\n吃掉。
    getline(cin,s);


//不确定大小的输入
    //核心思想：cin可以作为布尔值来判断，如果读入失败或者读到了EOF
    //cin就会变成false
    
    //场景A，塞入vector 直到输入结束
    vector<int> nums;
    int temp;
    while (cin>>temp){
        nums.push_back(temp);
    }

    //场景B，多组测试数据
    int a,b;
    //每次读入两个数算加法直到没有
    while(cin>>a>>b){
        cout<<a+b<<endl;
    }

    int N;
    cin>>N;
    //vector<int> nums[N] 是给我一个普通的数组
    //数组的长度是N，每一个元素的都是一个vector
    //变成了一个N行的二维数组
    //vector<int> nums(N) 给我一个可以装N个元素的vector
    vector<int> nums(N);
    vector<string> Name(N);
    cin.ignore();
    for(int i=0; i<N;++i){
        cin>>nums[i];
        getline(cin>>ws,Name[i]);
        //cin>>ws会让输入流把前面的空格tab\n全部扔掉
        //Until 碰到一个真正的字母，然后再用getline
    }




}
