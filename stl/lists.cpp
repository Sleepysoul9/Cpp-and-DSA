#include<bits/stdc++.h>
using namespace std ;

//lists works like doubly linked list

int main(){
    list<int> li ;
    li.emplace_back(10) ;
    li.push_back(15);
    li.emplace_front(5);
    li.push_front(0);

    cout << "Elements of list: " ;
    for(auto i : li){
        cout << i << " " ;
    }   
    cout << endl ;

    li.pop_back();
    li.pop_front();
    cout<<"elements of list";
    for(auto i:li){
        cout<<i << " ";
    }
    cout<<endl;

    li.push_back(25);
    li.push_front(-5);

    auto it = li.begin();
    advance(it,2); //iterator jumps by 2 positions
    li.insert(it,12); //inserts 12 at 2nd position
    advance(it,1);  //iterator jumps by 1 position
    li.erase(it);

    for(auto it :li){
        cout<<it<<" ";
    }
    cout<<endl;

    for(list<int>::reverse_iterator it=li.rbegin(); it!=li.rend(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;

    li.push_back(10);
    li.push_front(2);
    li.push_back(15);
    li.push_front(20);

    li.sort(); //sorts the list
    cout<<"sorted list: ";
    for(auto i : li){
        cout<<i<<" ";
    }
    cout<<endl;
    li.reverse(); //reverses the list
    cout<<"reversed list: ";
    for(auto i : li){
        cout<<i<<" ";
    }
    cout<<endl; 

    li.remove(10); //removes all occurrences of 10
    cout<<"list after removing 10: ";
    for(auto i : li){   
        cout<<i<<" ";
    }   
    cout<<endl;

    auto it2= find(li.begin(),li.end(),15);
    if(it2!=li.end()){
        li.erase(it2);
    }
    cout<<"list after erasing 15: ";
    for(auto i : li){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> li2 = {100,200,30,10};
    li.merge(li2);
    cout<<"merged list: ";
    for(auto i : li){
        cout<<i<<" ";
    }
    cout<<endl;

    li.unique(); //removes consecutive duplicates
    cout<<"list after applying unique: "; 
    for(auto i : li){
        cout<<i<<" ";
    } 
    cout<<endl;

    li.clear(); //clears the list   
    for(auto i : li){
        cout<<i<<" ";
    }   



    return 0 ;
}