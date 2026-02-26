#include <iostream>
#include <string>
using namespace std;
struct EmployeeNode{
    int id;
    std::string name;
    double salary;

    EmployeeNode* next;
};

void add_Employee(EmployeeNode *dummyHead
    ,int id,string name,double salary){
    EmployeeNode* newbie=new EmployeeNode;

    newbie->id=id;
    newbie->name=name;
    newbie->salary=salary;

    newbie->next=dummyHead->next;
    dummyHead->next=newbie;
}

void delete_Employee(EmployeeNode* dummyHead,int id){
    EmployeeNode *p =dummyHead;
    while(p->next->id !=id){
        p=p->next;
    }
    if(p->next !=nullptr){
        EmployeeNode *del=p->next;
        p->next=del->next;
        delete(del);
    }else{
        cout<<"未查询到此人"<<endl;
    }
    
}

void change_salary(EmployeeNode* dummyHead, int id, double new_salary) {
    // 1. 跨过幽灵老板，从第一个真员工开始找
    EmployeeNode *p = dummyHead->next; 
    
    // 2. 极其安全的防弹衣：只要没走到空气，且不是我们要找的人，就往下走
    while (p != nullptr && p->id != id) {
        p = p->next;
    }
    
    // 3. 循环结束，验收成果
    if (p != nullptr) {
        p->salary = new_salary; // 找到了，加工资！
    } else {
        cout << "未找到工号为 " << id << " 的员工！" << endl;
    }
}

void print_payroll(EmployeeNode* dummyHead) {
    cout << "====== 全公司工资单 ======" << endl;
    
    EmployeeNode *p = dummyHead->next; // 从第一个真员工开始
    
    // 不需要判断 id，只要没走到尽头，就无脑打印！
    while (p != nullptr) {
        cout << "工号: " << p->id 
             << " | 姓名: " << p->name 
             << " | 工资: $" << p->salary << endl;
        
        p = p->next; // 走向下一个人
    }
    cout << "=========================" << endl;
}
int main(){
    
}