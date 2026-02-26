//10.5.cpp
#include "10.5.h"
//构造函数
MYSTRING::MYSTRING(std::string s)
{
    length=s.size();
    ptr=new char[length]; 

    for(int i=0;i<length;i++){
        ptr[i]=s[i];
    }
}
//深拷贝
MYSTRING::MYSTRING(const MYSTRING& other){
    this->length = other.length;

    this->ptr = new char[this->length];

    for(int i=0 ;i<this->length;++i){
        this->ptr[i] = other.ptr[i];
    }
}

//赋值运算
MYSTRING& MYSTRING::operator=(const MYSTRING& other) {
    if (this == &other) return *this; // 防止自己给自己转账

    delete[] ptr; // 拆掉旧房子

    length = other.length; // 批新地
    ptr = new char[length];
    for (int i = 0; i < length; i++) {
        ptr[i] = other.ptr[i];
    }
    return *this;
}

void MYSTRING::show_string()const{
    for (int i = 0; i < length; i++)
    {
        std::cout<<ptr[i];
    }
    std::cout<<std::endl;
}

int MYSTRING::ask_for_length()const{
    return length;
}

void MYSTRING::add_a_new(MYSTRING& others){
    int new_length = this->length+others.length;

    char* new_ptr = new char[new_length];

    for(int i=0;i<this->length;++i){
        new_ptr[i]=this->ptr[i];
    }
    for(int i=0;i<others.length;++i){
        new_ptr[this->length+i]=others.ptr[i];
    }
    delete [] ptr;

    this->ptr = new_ptr;
    this->length = new_length;

}

MYSTRING::~MYSTRING()
{
    delete[] ptr;
}