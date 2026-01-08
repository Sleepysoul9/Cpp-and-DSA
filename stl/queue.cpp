#include<bits/stdc++.h>
using namespace std;

//queue = FIFO (First In First Out) data structure

int main(){

    queue<int> q ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);  
    q.push(5);
    cout<<"front element: "<<q.front()<<endl;
    cout<<"back element: "<<q.back()<<endl;
    cout<<"size of queue: "<<q.size()<<endl;

    q.pop();
    q.pop();
    cout<<"after pop front element: "<<q.front()<<endl;
    cout<<"back of queue after pop: "<<q.back()<<endl;  

    
    
    return 0 ;
}