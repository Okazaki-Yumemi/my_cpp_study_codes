#include <iostream>
using namespace std;

int main(){
    int a[5]={10,20,30,40,50};

    //内存紧挨在一起，查询的时候只用O(1)

    //arr 只要不和sizeof 呆在一起，就会瞬间退化Decat为一个指向第一个元素的
    //一级指针 &arr[0]

    //[] 的实际含义——编译器其实不认识中括号，写下arr[2]的
    //时候会变成 *(arr+2)
    //所以也可以写2[arr]，编译器会写作*(2+arr)

    //越界不报错


    //二维数组的降维打击：
    int martix[3][4];
    //访问的时候其实是：目标地址=首地址+（1*4+2）*每个元素的大小
    //Row major存放，先放满0行，然后1行 etc。。

    //协议传递二维参数的时候必须传递列数
    

}

// 函数传参的退化
void printSize(int a[100]){
    cout <<sizeof(a)<<endl;
}
//它会丢失自己的长度信息，只留下第一个干瘪的指针
//在编译期眼里，void printSize(int a[100])其实是void printSize(int* a)

