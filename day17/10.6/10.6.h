//10.6.h
#ifndef ClassManage_H
#define ClassManage_H
#include <vector>
#include <string>
#include <iostream>
class ClassManage
{
private:
    std::string class_name;
    std::vector<std::string> class_time_place;
    std::vector<std::string> students_name;
    int students_num;
    std::vector<int> midterm;
    std::vector<int> final;
    std::vector<int> class_test;
    static int you;
    static int liang;
    static int zhong;
    static int cha;
public:
    ClassManage(std::string n,std::vector<std::string>t_p,std::vector<std::string>s_n,int num,std::vector<int>mid,std::vector<int>fin,std::vector<int> c_t);
    void Grades_analysis();
    ~ClassManage();
};




#endif