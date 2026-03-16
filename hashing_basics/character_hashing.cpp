#include<bits/stdc++.h>
using namespace std;

//same as number hashing , but we instead use ascii codes for character hashing . if we are hashing only a specific case letters(upper or lower) we could use array of 26 size 

// to access the index of any letter we could do int('char' - 'a') , as "a" is starting index

//there are total of 256 charchters in ascii code chart . 

void lowercase_hashing(string s){
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

}

void overall_hashing(string s1){
    int hash[256] = {0} ;
    for(int i = 0 ; i<s1.size() ; i++){
        hash[int(s1[i])] += 1;
    }

    int k ;
    cin>> k;
    cin.ignore();            //ignore the input buffer
    while(k>0){
        char c;
        // cin>>c;          //doesnt accepts the whitespace , it skips the whitespace 
        cin.get(c);         //accepts whitespaces as input
        cin.ignore();       //ignores the enter button as a query submitted together with your query . for eg you ask for K then press enter it assumes that you are sending 2 queries together which is "K\n" K and \n so it gives 2 outputs .        
        cout<<hash[int(c)]<<endl;
        k--;
    }
}

int main(){
    string s , s1;
    cin>>s;
    lowercase_hashing(s); 

    getline(cin,s1);
    overall_hashing(s1);

    return 0;
}