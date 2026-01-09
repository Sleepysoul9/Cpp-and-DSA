#include<bits/stdc++.h>
using namespace std;

//set is data structure that stores everything in sorted order and every entry must be unique

int main(){
    set<int> st;
    st.insert(2);
    st.emplace(4);
    st.emplace(1);
    st.emplace(5);
    st.emplace(2);

    //begin(),end(),rend(),rbegin(),size(),empty() are same as all

    auto it1 = st.find(2);
    cout<<distance(st.begin(),it1)<<" ";             //cant cout iterator , so we print distance form begining
    cout<<*it1<<endl;

    auto it2 = st.find(3);
    if(it2!=st.end()){
        cout<<*it2<<" distance from beginnning "<<distance(st.begin(),it2)<<endl;
    }
    else{
        cout<<"item not found"<<endl;
    }
    cout<<endl;

    st.emplace(3);
    st.emplace(6);
    st.emplace(8);
    st.emplace(7);

    for(set<int>::reverse_iterator it=st.rbegin();it!=st.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<st.count(4)<<endl;        //gives either 0 or 1 as only unique entries


    //{1,2,3,4,5,6,7,8}
    auto it3= st.find(2);        //finds position of 2 in set
    auto it4 = st.find(5);      //finds position of 5 in set
    st.erase(it3,it4);     //erase[start,end)
    //{1,5,6,7,8}

    for(set<int>::iterator it5=st.begin(); it5!=st.end();it5++){
        cout<<*it5<<" ";
    }
    cout<<endl;

    auto it6 = st.lower_bound(2);
    auto it7 = st.upper_bound(4);
    
    return 0;
}