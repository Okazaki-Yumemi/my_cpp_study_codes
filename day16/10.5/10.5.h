//10.5.h
#ifndef MYSTRING_H
#define MYSTRING_H
#include <string>
#include <iostream>
class MYSTRING
{
private:
    char* ptr;
    int length;
public:
    MYSTRING(std::string s);
    void show_string()const;
    int ask_for_length()const;
    void add_a_new(MYSTRING& other);
    ~MYSTRING();
};



#endif