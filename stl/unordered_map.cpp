#include<bits/stdc++.h>
using namespace std;

int main(){
    
    unordered_map<int,int> ump ;
    ump.emplace(3,1);
    ump.emplace(4,1);
    ump.emplace(5,1);
    ump.emplace(6,1);
    ump.emplace(1,1);
    
    for(auto i:ump){
        cout<<"key : "<<i.first<<","<<"value : "<<i.second<<endl;
    }
    cout<<endl;

    auto it = ump.find(3);
    cout<<(*it).second<<endl;

    cout<<"size"<<ump.size()<<endl;

    
    return 0;
}