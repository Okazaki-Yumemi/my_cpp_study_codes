#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int guess,final;
    int count=0;

    srand(time(NULL));
    final=rand()%(100-0+1)+0;
    while (count<=10)
    {
        cout<<"Please guess!"<<endl;
        cin>>guess;
        if(guess==final) break;
        if(guess<final) cout<<"Too small!"<<endl;
        if(guess>final) cout<<"Too big"<<endl;
        count+=1;
    }
    if (count==11 & guess!=final) cout<<"No more chance!"<<endl;
    if (guess==final) cout<<"Congratulations! Youre right!"<<endl;

    return 0;

}