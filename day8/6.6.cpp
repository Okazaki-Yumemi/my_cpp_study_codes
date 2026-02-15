#include <iostream>
using namespace std;

int main()
{   
    int yuanyin=0,fuyin=0,others=0;
    const int max_size=50;
    char a[max_size];
    cout<<"Please enter a string"<<endl;
    cin.getline(a,max_size);

    for(int i=0;a[i]!='\0';++i)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            switch (a[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                yuanyin+=1;
                break;
            
            default:
                fuyin+=1;
                break;
            }
        }
        else others+=1;
    }
    cout<<"元音字母\t"<<yuanyin<<endl;
    cout<<"辅音字母\t"<<fuyin<<endl;
    cout<<"其他字符\t"<<others<<endl;
    
    return 0;
}