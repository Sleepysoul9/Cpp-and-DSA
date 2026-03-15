#include<bits/stdc++.h>
using namespace std;

//we make an another array of size max(arr1)+1 so that we can keep the tally of all the numbers' frequency . the index of hash array denotes the numbers in arr1. 
//the size of hashing array would be max element to be searched in arr1 + 1

//input 
// size of arr1 
// array
// no of elemens you are searching 
// elements you're searching ....

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++ ){
        cin>>arr[i];
    }
    
    //lets say 12 was the max number we were given as input search for hash
    int hash[13] = {0};
    for(int i = 0 ; i < n ; i++){
        hash[arr[i]] += 1;
    }

    int k ;
    cin>>k;
    while(k>0){
        int num ;
        cin>>num;
        cout<<hash[num]<<endl;
        k--;
    }
    
    return 0;
}