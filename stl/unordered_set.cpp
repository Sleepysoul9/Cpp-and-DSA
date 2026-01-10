#include<bits/stdc++.h>
using namespace std;

//same as set but just not sorted, randomized storage

int main(){
    unordered_set<int> st;
    st.emplace(2);
    st.emplace(1);
    st.emplace(3);
    st.emplace(1);
    st.emplace(4);
    st.emplace(5);
    st.emplace(6);

    for(auto i:st){
        cout<<i<< " ";
    }
    cout<<endl;

    st.erase(1);
    auto it = st.find(5);
    cout << distance(st.begin(),it)<<endl;

    for(auto i:st){
        cout<<i<< " ";
    }
    cout<<endl;

    cout<<"size of unordered set"<<st.size()<<endl;

    
    
    return 0;
}