#include <iostream>
#include <cmath>
using namespace std;


int** Magic(int n)
{
    int value=1;
    int **Magic=new int *[n];
    for(int i=0;i<n;++i)
    {
        Magic[i]=new int[n]();
    }
    Magic[0][n/2]=value;
    ++value;
    int i=1;
    int j=1;
    while(value<=n*n)
    {
        int row_num=((0-i)%n+n)%n;
        int col_num=(j+n/2)%n;
        if(Magic[row_num][col_num]==0 )
        {
            Magic[row_num][col_num]=value;
            ++value;
            ++i;
            ++j;
        }
        else
        {
            --i;
            --j;
            --i;
            continue;
        }

    }
    return Magic;

}
int main()
{
    cout<<"Please enter n"<<endl;
    int n=0;
    cin>>n;
    if(n%2!=1)
    {
        cout<<"错误输入！"<<endl;
        return 0;
    }
    int** my_magic=Magic(n);
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<"  "<<my_magic[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;++i)
    {
        delete[] my_magic[i];
    }
    delete [] my_magic;
    return 0;
}