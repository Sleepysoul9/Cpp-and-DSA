#include<bits/stdc++.h>
using namespace std;

int a =0 ;
void n_print(int n){
    if(a>=n) return ;
    else{
        cout<<a+1<<" : hello world"<<endl;
        a++;
    }
    n_print(n);
}


int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    n_print(n);

    return 0;
}