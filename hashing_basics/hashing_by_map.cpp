#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>> n ;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    map<int,int> mpp;           //in maps values are automatically initiated by 0
    
    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]] += 1;
    }
    
    int q ;
    cin >> q;

    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }

    for(auto it : mpp){
        cout<<it.first<< " - " << it.second <<endl;
    }
    
    return 0;
}