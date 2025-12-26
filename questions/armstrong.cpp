#include<bits/stdc++.h>
using namespace std;

int main() {
    int num,len=0, arm=0 , n , i ;

    cout << "enter a number "<<endl;
    cin>> n ;

    num = n ;

    while(n>0){
        n = n/10 ;
        len++ ;
    }

    n = num ;
    i =0 ;
    while(n>0){
        i = n%10;
        arm = arm + pow(i,len) ;
        n = n/10 ;
    }

    if(arm == num){
        cout << num << " is an armstrong number"<<endl;
    }
    else{
        cout << num << " is not an armstrong number"<<endl;
    }
    return 0;
}