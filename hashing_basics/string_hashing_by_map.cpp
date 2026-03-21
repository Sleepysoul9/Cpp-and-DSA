#include<bits/stdc++.h>
using namespace std;

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