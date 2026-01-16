#include<bits/stdc++.h>
using namespace std;

int n_factorial(int n){
    if(n==1) return 1;
    return n*n_factorial(n-1);
}

int main(){
    int n ;
    cout<<"enter n : ";
    cin>>n;

    cout<<n_factorial(n)<<endl;
    
    return 0;
}