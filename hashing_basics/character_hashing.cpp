#include<bits/stdc++.h>
using namespace std;

//same as number hashing , but we instead use ascii codes for character hashing . if we are hashing only a specific case letters(upper or lower) we could use array of 26 size 

// to access the index of any letter we could do int('char' - 'a') , as "a" is starting index

//there are total of 256 charchters in ascii code chart . 

int main(){
    string s;
    cin>>s;
    int hash[26]  = {0};
    for(int i = 0 ; i < s.size() ; i++){
        hash[int(s[i] - 'a')] += 1;
    }

    int k ;
    cin>>k ;
    while(k>0){
        char chara ;
        cin >> chara ;
        cout<<hash[int(chara - 'a')]<<endl;
        k-- ;
    }


    return 0;
}