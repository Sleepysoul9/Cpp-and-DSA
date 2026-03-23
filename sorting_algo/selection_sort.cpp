#include<bits/stdc++.h>
using namespace std;


/* 
time comlexity analysis(using iterative approach)

for(int i = 0 ; i < n ; i++ ){              
    int mini = i;
    for(int j = i+1 ; j<n+1 ; j++){
    ...
    }
}

first loop runs for n times from outer loop then in inner loop it runs for n-1 times for first time then n-2 .... till 1 time 

that is n+(n-1)+(n-2)+(n-3)+....1
n(n+1)/2
n^2/2  + n/2

==> this makes it n^2

O(n^2)


time complexity of selection sort is O(N^2)

*/



//Recurrsive approach
void selection_sort(vector<int> &arr , int i , int j){
    if(i>=j) return ;
    int mini = i ;
    
    for(int k = i+1 ; k<arr.size() ; k++){
        mini = (arr[k]<arr[mini]) ? k : mini ;
    }
    swap(arr[mini],arr[i]);
    selection_sort(arr,i+1,arr.size()-1);
   
}


//Iterative approach
void selection_sort_i(vector<int> &brr , int s ){
    int n = brr.size() -1 ;
    
    for(int i = 0 ; i < n ; i++ ){
        int mini = i;
        for(int j = i+1 ; j<n+1 ; j++){
            if(brr[j]<brr[mini]){
                mini = j;
            }
        }
        swap(brr[mini],brr[i]);
    }

    for(int i = 0 ; i < brr.size() ; i++){
        cout<<brr[i]<<" ";
    }
}

int main() {
    vector<int> arr ;
    int n ;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin>>num;
        arr.emplace_back(num);
    }

    selection_sort(arr,0,arr.size()-1);

    for(int k = 0 ; k < arr.size() ; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    vector<int> brr;
    int k ;
    cin>>k;
    for(int i = 0 ; i < k ; i++){
        int num;
        cin>>num;
        brr.emplace_back(num);
    }

    selection_sort_i(brr,0);

    return 0;
}