#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count=0;
    cout<<"Please enter a sentence."<<endl;
    cin.get(ch);
    while (ch !='.')
    {
        if(ch ==' ') count+=1;
        cin.get(ch);
    }
    count+=1;

    cout<<"共有 "<<count<<" 个单词"<<endl;
    return 0;

}
