#include <iostream>
using namespace std;

int main() {
    cout << "--- 查看数据类型大小 (单位: 字节) ---" << endl;
    
    cout << "int 占:       " << sizeof(int) << " bytes" << endl;
    cout << "double 占:    " << sizeof(double) << " bytes" << endl;
    cout << "short int 占: " << sizeof(short int) << " bytes" << endl;
    cout << "float 占:     " << sizeof(float) << " bytes" << endl;

    // 还可以看看 long long (存大数用的)
    cout << "long long 占: " << sizeof(long long) << " bytes" << endl;

    return 0;
}