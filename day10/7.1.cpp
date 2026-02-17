#include <iostream>
#include <string>
using namespace std;

int dd=0,yy=0;
string mm="";
string date="";
void getDate(int &dd, string &mm, int &yy);


int main()
{   
    cout<<"Please enter the date:(type:dd-mmm-yy )"<<endl;
    getline(cin,date);
    getDate(dd,mm,yy);
    cout<<"Date: "<<dd<<endl;
    cout<<"Month: "<<mm<<endl;
    cout<<"Year: "<<yy<<endl;
    return 0;
}

void getDate(int &dd, string &mm, int &yy)
{
    dd=(date[0]-'0')*10+(date[1]-'0');
    mm=date.substr(3,3);
    yy=(date[7]-'0')*10+(date[8]-'0');
}