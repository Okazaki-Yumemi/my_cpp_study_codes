#include <iostream>
using namespace std;

void di_gui(int n);
void bu_di_gui(int n);
int row_count;

int main()
{
    cout<<"Please enter the row number"<<endl;
    cin>>row_count;

    cout<<"The di gui way:"<<endl;
    cout<<endl;
    di_gui(row_count);
    cout<<endl;
    cout<<"The bu di gui way"<<endl;
    cout<<endl;
    bu_di_gui(row_count);
    return 0;
}

void di_gui(int n)
{
    static int space_number=0;
    static int row=1;
    if (row<=row_count)
    {
        for (int i=0;i<space_number;++i)
        {
            cout<<" ";
        }
        for (int i=1;i<=n;++i)
        {
            cout<<"*";
        }
        cout<<endl;
        space_number+=1;
        row+=1;
        di_gui(n);
    }
}

void bu_di_gui(int n)
{
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<i;++j)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;++k)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}