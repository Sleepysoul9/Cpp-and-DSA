#include<bits/stdc++.h>
using namespace std ;

int main() {
    string s = "";
    cout << s.size() << endl; // size of string
    cout << s.length() << endl; // length of string

    cout << s.empty() << endl; // check if string is empty 
    s.push_back('!') ; // add character at the end
    s[0] = 'K' ; // modify character at index 0
    cout << s << endl ;


    //string stores characters in a contiguous memory location like arrays

    s= "Kushagra";
    int len = s.size() ;
    s[len-1] = 'A' ; 
    cout << s << endl ;

    return 0 ;
}