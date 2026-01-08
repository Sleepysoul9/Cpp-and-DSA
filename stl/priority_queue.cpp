#include<bits/stdc++.h>
using namespace std;    

//priority queue is a container that either stores in ascending or descending order
//by default it is max heap(ie descending order)
//descending order is known as max heap (max no at top)
//ascending order is known as min heap (min no at top)
//it works as stack (LIFO data structure)

int main(){

    
    //max heap(max at top)
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);
    pq.push(2);

    cout<<"top"<<pq.top()<<endl;        //8
    pq.pop();
    cout<<"top"<<pq.top()<<endl;        //5

    cout<<"size: "<<pq.size()<<endl;    

    //min heap (min at top)
    priority_queue<int,vector<int>, greater<int>> minHeap ;
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(8);
    minHeap.push(3);

    cout<<"top"<<minHeap.top()<<endl;        //1
    minHeap.pop();
    cout<<"top"<<minHeap.top()<<endl;        //2
    cout<<"size: "<<minHeap.size()<<endl;
    
    

    
    return 0 ;
}