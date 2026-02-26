#include <iostream>
#include "seq.h" // 拿到菜单

using namespace std;

int main() {
    // 第一次测试：默认情况
    cout << GetNextLabel() << endl; // 预期：label 0
    cout << GetNextLabel() << endl; // 预期：label 1

    // 第二次测试：定制图号
    SetLabel("图");
    SetInitNumber(1);
    cout << GetNextLabel() << endl; // 预期：图 1
    cout << GetNextLabel() << endl; // 预期：图 2

    return 0;
}