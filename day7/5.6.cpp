#include <iostream>
using namespace std;

char small_judge(char ch);
char first_try;
int main()
{
    cout<<"Please enter a lower char"<<endl;

    cin>>first_try;

    small_judge(first_try);
}

char small_judge(char ch)
{


    if (ch>='a' && ch<='z')
    {
        cout<<"You successfully entered the:"<<ch<<endl;
        return ch;
    }
    else
    {
        cout<<"Invaild input!Please enter again!"<<endl;
        cin>>ch;
        small_judge(ch);
        return ch;
    }
}