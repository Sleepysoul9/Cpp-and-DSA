#include<bits/stdc++.h>
using namespace std;

//dq = deque double ended queue(queue that allows insertion and deletion from both ends)

int main(){
    
    deque<int> dq; //declaration of deque
    dq.push_back(1); //inserting element at the back
    dq.push_front(0);
    dq.push_back(2);
    dq.push_front(-1);

    cout<<"back: "<<dq.back()<<endl;
    cout<<"front: "<<dq.front()<<endl;

    dq.pop_back(); //removing element from back
    dq.pop_front(); //removing element from front

    cout<<"elements of deque: ";
    for(deque<int>::iterator it=dq.begin(); it!=dq.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"size of deque: "<<dq.size()<<endl;

    reverse(dq.begin(),dq.end());

    for(deque<int>::reverse_iterator it = dq.rbegin(); it!=dq.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    
    return 0;
}