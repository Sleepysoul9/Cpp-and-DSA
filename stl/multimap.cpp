#include<bits/stdc++.h>
using namespace std;

//same as map but stores multiple entire of same key . no unique key boundation, 

int main(){
    
    multimap<int,int> mmp;
    mmp.emplace(3,4);
    mmp.emplace(2,3);
    mmp.emplace(4,1);
    mmp.emplace(1,2);
    mmp.insert({5,3});
    for(auto i:mmp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it= mmp.find(3);
    cout<<++(*it).second<<endl;


    for(multimap<int,int>::iterator it2=mmp.begin() ; it2!=mmp.end();it2++){
        cout<<"key : "<<(*it2).first<<" "<<"value: "<<(*it2).second<<endl;
    }
    cout<<endl;
    
    
    return 0;
}