//10.2.h
#ifndef LONG_H
#define LONG_H
#include <string>
#include <iostream>

class LongLongInt
{
private:
    int length;
    char* digits;
public:
    LongLongInt(const std::string& s);
    LongLongInt(const LongLongInt& other);
    LongLongInt& assign(const LongLongInt& other);
    void display() const;
    LongLongInt add(const LongLongInt& other) const;
    bool is_equal(const LongLongInt& other) const;
    bool is_greater(const LongLongInt& other) const;
    bool is_greater_or_equal(const LongLongInt& other) const;
    ~LongLongInt();
};

#endif