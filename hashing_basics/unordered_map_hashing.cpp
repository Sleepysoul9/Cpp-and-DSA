#include<bits/stdc++.h>
using namespace std;

//unordered map uses O(1) for best and avg case but that worst case takes O(N) , which when ran in loop finally makes O(N^2) time complexity. and this worst case happens very rarely , hence we use unordered map for hashing

//that worst case of unordered map happens due to internal collisions

int main() {
    string s;
    cout<<"enter your string : ";
    getline(cin,s);
    unordered_map<char,int> mpp ;
    for(int i = 0 ; i<s.size() ; i++){
        mpp[s[i]] += 1;
    }

    int q;
    cout<<"enter the number of queries : ";
    cin>>q;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while(q--){
        char c;
        cin.get(c);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<mpp[c]<<endl;
    }

    return 0;
}