#include <iostream>

using namespace std;

int main(){
    //栈内存Stack
    int a=10;
    double b=3.14;
    int arr[100];
    //特点：1.全自动管理
    //2.空间小
    //3.大小固定

    //堆内存Heap

    //核心 new:
    int* p1 = new int; //堆里面创建一个空间，把地址给p1
    *p1 = 99;//解引用，把99放进去
    
    //创建一个初始值为100的空间
    int* p2 = new int(100);

    //3.终极：动态数组
    int n;
    cin>> n;
    int* arr= new int[n];//想多高多高 
    arr[0]=10;

    //new 返回的永远是指针，因为新的值在堆区

    //拆除单房；
    delete p1;
    delete p2;
    //拆除数组
    delete[] arr;

    


}