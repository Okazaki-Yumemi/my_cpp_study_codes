#include <iostream>

#include <vector>

using namespace std;


int main(){
    int n;
    cout<<"Please enter player numbers"<<endl;
    cin>>n;
    int m;
    cout<<"说几会死？"<<endl;
    cin>>m;
    vector<int> player;
    player.push_back(0);
    for(int i=1;i<n;++i){
        player.push_back(i);
    }
    int i=0;

    while (player.size()>1)
    {
        i=(i+m-1)%player.size();
        player.erase(player.begin()+i);
    }
    cout<<"The last one:"<<player[0]<<endl;
    
}