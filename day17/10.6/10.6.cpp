//10.6.cpp
#include "10.6.h"

int ClassManage::you=90;
int ClassManage::liang=80;
int ClassManage::zhong=70;
int ClassManage::cha=60;

ClassManage::ClassManage(std::string n,std::vector<std::string>t_p,std::vector<std::string>s_n,
    int num,std::vector<int>mid,std::vector<int>fin,std::vector<int> c_t):class_name(n),class_time_place(t_p),
    students_name(s_n),students_num(num),midterm(mid),final(fin),class_test(c_t)
{
    std::cout<<"录入成功！"<<std::endl;
}

void ClassManage::Grades_analysis(){
    double sum_mid=0,sum_final=0,sum_ct=0;
    int youxiu=0,lianghao=0,zhongdeng=0,chajing=0;
    
    
    for(int i=0;i<students_num;++i){
        sum_final+=final[i];
        if(final[i]>=you){
            youxiu+=1;
            continue;
        }else if (final[i]>=liang)
        {
            lianghao+=1;
            continue;
        }else if (final[i]>=zhong)
        {
            zhongdeng+=1;
            continue;
        }else{
            chajing+=1;
        }
    }
    double average=(double)(sum_final/this->students_num);

    std::cout<<"统计结果如下:"<<"||平均分:"<<average<<"||优秀人数:"<<youxiu<<"|| 良好人数:"<<lianghao<<"||中等人数"<<zhongdeng<<"||差劲人数:"<<chajing<<std::endl;

}
ClassManage::~ClassManage()
{
}