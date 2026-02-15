#include <iostream>
using namespace std;

int main()
{
    const int max_size=50;
    char a[max_size];

    cout<<"Please enter a string,end with ."<<endl;
    cin.getline(a,max_size);
    for(int i=0;a[i] !='\0';++i)
    {
        if((a[i]>='a' && a[i]<='z'))
        {
            cout<<a[i]<<" : "<<a[i]-'a'+1<<endl;

        }
        else if ((a[i]>='A' && a[i]<='Z'))
        {
            cout<<a[i]<<" : "<<a[i]-'A'+1<<endl;
        }
        else
        {
             cout<<a[i]<<" : "<<0<<endl;           
        }
        
    }

}