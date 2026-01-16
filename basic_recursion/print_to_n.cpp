#include<bits/stdc++.h>
using namespace std;

void show_n(int i ,int n){
    if(i>n) return;
    cout<<i<<endl;
    show_n(++i,n);
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    show_n(1,n);
    
    return 0;
}