#include<bits/stdc++.h>
using namespace std;

bool pallindrome(int n){
    int num , rev=0 , i;
    num = n ;

    while (n!=0) {
        i = n%10;
        rev = (rev*10) +i ;
        n = n/10 ;
    }

    if(rev == num) {
        cout << num << " is pallindrome"<<endl;
        return true ;
    }
    else {
        cout << num << " is not pallindrome"<<endl;
        return false ;
    }
}

int main() {
    int num ;
    cout << "Enter a number: ";
    cin >> num ;

    pallindrome(num);

    return 0;
}