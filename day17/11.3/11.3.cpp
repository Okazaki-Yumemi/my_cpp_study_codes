#include <iostream>
#include <vector>
#include <string>
#include <cassert>
class Vector_10
{
private:
    int data[10];
public:
    Vector_10(std::vector<int> arr=std::vector<int>(10,0));
    Vector_10 operator +(const Vector_10 &other) const;
    int operator *(const Vector_10 other)const;
    friend std::ostream& operator <<(std::ostream& os, const Vector_10& vector); 
    friend std::istream& operator >>(std::istream& is ,Vector_10& obj);
    ~Vector_10();
};

Vector_10::Vector_10(std::vector<int> arr)
{
    assert(arr.size()==10);
    for (int i = 0; i < 10; i++)
    {
        data[i]=arr[i];
    }
    
}

Vector_10 Vector_10::operator+(const Vector_10 &other)const{
    Vector_10 tmp;
    for (int i = 0; i < 10; i++)
    {
        tmp.data[i]=this->data[i]+other.data[i];
    }
    return tmp;
}

int Vector_10::operator*(const Vector_10 other)const {
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=other.data[i]*this->data[i];
    }
    return sum;
}

std::ostream& operator <<(std::ostream& os,const Vector_10& vector){
    os<<"< ";
    for (int i = 0; i < 10; i++)
    {
        os<<vector.data[i]<<" ";
    }
    os<<">";
    return os;
    
}

std::istream& operator >>(std::istream& in ,Vector_10& obj){
    for (int i = 0; i < 10; i++)
    {
        in>>obj.data[i];
    }
    return in;
    
}

Vector_10::~Vector_10()
{
}

int main() {
    // 1. 测试默认构造和输入
    Vector_10 v1;
    std::cout << "请输入10个整数 (用空格隔开): ";
    std::cin >> v1; // 完美触发 operator>>

    // 2. 测试带参构造
    std::vector<int> init_data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Vector_10 v2(init_data);

    // 3. 测试输出
    std::cout << "\n向量 v1: " << v1 << std::endl;
    std::cout << "向量 v2: " << v2 << std::endl;

    // 4. 测试加法
    Vector_10 v3 = v1 + v2;
    std::cout << "v1 + v2 = " << v3 << std::endl;

    // 5. 测试点乘
    int dot_product = v1 * v2;
    std::cout << "v1 * v2 (点乘) = " << dot_product << std::endl;

    return 0;
}