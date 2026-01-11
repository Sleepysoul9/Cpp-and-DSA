#include<bits/stdc++.h>
using namespace std;

int x=1;
void tenprint(){
    if(x>10) return;
    else{
        cout<<x<<endl;
        x++;
    }
    tenprint();
}

int main(){
    
    tenprint();
    
    
    return 0;
}