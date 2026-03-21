#include<bits/stdc++.h>
using namespace std;

//maps takes nlog(n) in average , best and worst case to store and fetch the things, whereas unordered map takes O(1) in best and average case and O(N) in worst case ,

int main(){
    string s;
    cout<<"enter the string : ";
    getline(cin,s);

    map<char,int> mpp;
    for(int i = 0 ; i < s.size() ; i++){
        mpp[s[i]] += 1;
    }
    
    int q ;
    cout<<"enter no of queries : ";
    cin>>q;
    cin.ignore(numeric_limits<streamsize>::max() , '\n');
    while(q--){
        char c ;
        cin.get(c);
        cin.ignore(numeric_limits<streamsize>::max() , '\n');
        cout<<mpp[c]<<endl;
    }
    return 0;
}