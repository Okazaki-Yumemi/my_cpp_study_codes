//10.2.cpp
#include "10.2.h"

LongLongInt::LongLongInt(const std::string& s)
{
    length=s.size();

    digits=new char[length];

    for (int i=0; i<length; i++){
        digits[i]=s[length-i-1]-'0';
    }
}

//深拷贝
LongLongInt::LongLongInt(const LongLongInt& other) {
    
    length = other.length;
    
    digits = new char[length];
    
    for (int i = 0; i < length; i++) {
        digits[i] = other.digits[i];
    }
}

void LongLongInt::display() const{
    for (int i = length-1; i >=0; i--)
    {
        std::cout<<(char)(digits[i]+'0');
    }
    
}
LongLongInt LongLongInt::add(const LongLongInt& other)const{
    int carry=0;
    int i=0;
    std::string result_str ="";
    while (i<length || i<other.length ||carry>0)
    {
        int sum=carry;
        if(i<length){
            sum+=this->digits[i];
        }
        if(i<other.length){
            sum+=other.digits[i];
        }
        if(sum>=10){
            carry=1;
        }else{
            carry=0;
        }
        int current_digit = sum % 10;
        
        result_str=(char)(current_digit+'0')+result_str;

        i++;
    }
    return LongLongInt(result_str);
}

LongLongInt& LongLongInt::assign(const LongLongInt& other){
    if (this == &other){
        return *this;
    }

    delete[] digits;

    length = other.length;
    digits = new char[length];

    for(int i=0 ; i<length ; i++){
        digits[i] = other.digits[i];
    }

    return *this;
}

bool LongLongInt::is_equal(const LongLongInt& other)const{
    if (length != other.length)
    {
        return false;
    }else{
        for(int i=0 ; i<length ;++i){
            if (digits[i] != other.digits[i])
            {
                return false;
            }
            
        }
        return true;
    }
}

bool LongLongInt::is_greater(const LongLongInt& other)const{
    if(this->is_equal(other)) return false;
    if (length>other.length)
    {
        return true;
    }else if (length<other.length)
    {
        return false;
    }else{
        for (int i = length-1; i >=0; i--)
        {
            if (digits[i]<other.digits[i])
            {
                return false;
            }
        }
        return true;           
    }
}
bool LongLongInt::is_greater_or_equal(const LongLongInt& other)const{
    if(this->is_equal(other)||this->is_greater(other)){
        return true;
    }
    return false;
}

LongLongInt::~LongLongInt()
{
    delete[] digits;
}