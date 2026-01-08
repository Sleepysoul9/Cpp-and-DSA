#include<bits/stdc++.h>
using namespace std;

//stack = LIFO (Last In First Out) data structure

int main(){
    stack<int> s ;
    s.push(1); //inserting element 1
    s.push(2);
    s.push(3);
    s.push(4);

    list<int> l = {7,8,9};
    s.push(l.front());
    
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;

    deque<int> dq2 = {10,11,12};
    stack<int> s2(dq2);

    swap(s,s2);

    cout<<s.top()<<endl;
    cout<<s2.top()<<endl;
    
    
    return 0;
}