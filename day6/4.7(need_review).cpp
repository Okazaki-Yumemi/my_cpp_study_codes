#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    cout << setw(4) << "*"; 

    for (int j = 1; j <= 9; ++j) {
        cout << setw(4) << j;
    }
    cout << endl; 

    for (int i = 1; i <= 9; ++i) {
        
        cout << setw(4) << i;

        for (int j = 1; j <= 9; ++j) {
            
            if (j < i) {
                // 【关键点】如果列号比行号小，说明是左下角的空白区
                // 打印 4 个空格占位（必须和数字的宽度 setw(4) 一样！）
                cout << "    "; // 或者 cout << setw(4) << "";
            } else {
                // 否则，打印乘积
                cout << setw(4) << i * j;
            }
        }
        
        // 这一行打完了，换行
        cout << endl;
    }

    return 0;
}