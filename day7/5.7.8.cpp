#include <iostream>
using namespace std;

void reverse_7(int n);
int reverse_8(int n);

int main()
{
    int numbers;
    cout<<"Please enter the numbers"<<endl;
    cin>>numbers;
    reverse_7(numbers);
    cout<<endl;
    cout<<"The reverse of these numbers is: "<<reverse_8(numbers)<<endl;
}

void reverse_7(int n) {
    // 1. 先打印当前个位数
    cout << n % 10; 

    // 2. 递归终止条件：如果只剩一位数了，打印完就结束
    if (n < 10) {
        return; 
    }
    
    // 3. 递归调用：把剩下的数字（去掉个位）扔进去继续处理
    reverse_7(n / 10);
}

int reverse_8(int n)
{
    int last=n%10;
    int new_numbers=last;
    int remain=n/10;
    while(remain>0)
    {
        last=remain%10;
        new_numbers=new_numbers*10+last;
        remain/=10;
    }
    return new_numbers;
}