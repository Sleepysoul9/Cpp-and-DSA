#include<bits/stdc++.h>
using namespace std;

int k=1;
void n_name(int n){
    if(k>n) return;

    cout<<k<<". Kushagra Sanghi"<<endl;
    k++;
    n_name(n);

}

void n_name_other_way(int i,int n){
    if(i>=n) return ;
    cout<<i+1<<". Kushagra Sanghi"<<endl;
    n_name_other_way(i+1,n);
}

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    n_name(n);
    cout<<endl;
    n_name_other_way(0,n);
    
    return 0;
}
