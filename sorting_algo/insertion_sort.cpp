/* 
time complexity : 
best case : O(N)
average case : O(N^2)
worst case : O(N^2)
*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr , int s , int e){
    for(int i = s ; i <= e ; i++){
        int j = i ;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr ;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin>>num;
        arr.emplace_back(num);
    }
    
    insertion_sort(arr,0,n-1);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}