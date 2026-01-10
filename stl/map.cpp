#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<int,int> mp;
    mp.emplace(3,1);
    mp.insert({1,2});
    mp[2]=3;
    for(auto it :mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    
    map<int,int> mpp = {{3,1}};
    mpp.emplace(1,2);
    mpp.emplace(2,2);
    mpp.emplace(5,6);
    mpp.emplace(4,3);
    mpp.emplace(4,5);
    for(auto i :mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<mpp[5]<<endl;

    auto it2 = mpp.find(3);
    cout<<(*it2).second<<endl;

    
    return 0;
}