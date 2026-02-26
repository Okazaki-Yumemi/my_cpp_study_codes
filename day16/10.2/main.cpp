//main.cpp
#include "10.2.h"

int main() {
    LongLongInt big_num1("1111111111111111111");
    std::cout << "存进超级大数: ";
    big_num1.display(); 
    std::cout << std::endl;
    LongLongInt big_num2("9999999999999999999");
    LongLongInt c=big_num1.add(big_num2);
    c.display();
    return 0;
}