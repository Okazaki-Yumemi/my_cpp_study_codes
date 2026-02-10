#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9;
    cout<<"请输入9个整数"<<endl;
    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9;
    cout<<"-------输出-------"<<endl;
    // 第一行
    // setw(8) 表示给每个数占8个格子的位置
    cout << left;

    cout << setw(8) << a1 << setw(8) << a2 << setw(8) << a3 << endl;

    // 第二行
    cout << setw(8) << a4 << setw(8) << a5 << setw(8) << a6 << endl;

    // 第三行
    cout << setw(8) << a7 << setw(8) << a8 << setw(8) << a9 << endl;

    return 0;
}