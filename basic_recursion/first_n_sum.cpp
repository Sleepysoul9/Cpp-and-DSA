#include<bits/stdc++.h>
using namespace std;

int sum_to_n(int n){
    if(n==0) return 0;
    return n + sum_to_n(n-1);
} 

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    int a =sum_to_n(n);
    cout<<a<<endl;
    
    return 0;
}