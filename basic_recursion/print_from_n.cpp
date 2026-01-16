#include<bits/stdc++.h>
using namespace std;

void reverse_print(int n,int t){
    if(n<t) return ;
    cout<<n<<endl;
    n--;
    reverse_print(n,t);
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    reverse_print(n,1);
    
    return 0;
}