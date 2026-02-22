#include <iostream>

using namespace std;

int main(){
    // &取地址符

//一级指针和解引用
    int a=0;
    int* p=&a;
    //p 内即为a的地址

    cout<<p; //打印出地址
    cout<<*p; //打印出对应地址里面的东西

    *p=99 ;//根据地址去修改其中的内容

//指针和数组的血脉羁绊
    int arr[5]={10,20,30,40,50};
    int* p = arr;
    //arr独立出现的时候数组退化，变成了&arr[0]
    //p+1会自动跳到下一个元素的地址起始点
    //平时写的arr[2]其实就是 *(arr+2)

    int* ptr=nullptr;
}

//函数传递参数的三大流派：
//值传递
void takeDamage(int x){x=x-20;}
//内部克隆的x不会发生任何改变

//地址传递、指针传递
void takeDamage1(int* p){*p=*p-20;}
//直接通过地址操控外界

//引用传递
void takeDamage2(int& a){a=a-20;}
//直接就是传递本尊

//二级指针
void allocate(int** p2){//二级指针就是装着指针编号的抽屉 *p2是找到一级指针，**p2是找到值
    *p2 =new int;
}