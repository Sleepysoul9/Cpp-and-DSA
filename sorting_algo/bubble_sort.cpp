//pushes the max to last by adjacent swapping

/*
for eg.
13 , 46 , 24 , 52 , 20 , 9 
13 , 24 , 46 , 52 , 20 , 9
13 , 24 , 46 , 20 , 52 , 9
13 , 24 , 46 , 20 , 9 , 52

13 , 24 , 20 , 46 , 9 , 52
13 , 24 , 20 , 9 , 46 , 52

13 , 20 , 24 , 9 , 46 , 52
13 , 20 , 9 , 24 , 46 , 52

13 , 9 , 20 , 24 , 46 , 52

9 , 13 , 20 , 24 , 46 , 52

*/


#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr){
    int n = arr.size()-1;

    for(int i = n-1 ; i > 0 ; i--){
        for(int j = 0 ; j <= i ; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
            //for logging the steps of our sorting , we are printing it step by step , like after each step we are printing it what the array looks like after operation
            for(int k = 0 ; k <= n ; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

}

int main(){
    vector<int> arr;
    int n ;
    cin>>n;
    for(int i = 0 ; i < n ; i++ ){
        int num;
        cin>>num;
        arr.emplace_back(num);
    }

    bubble_sort(arr);

    return 0;
}