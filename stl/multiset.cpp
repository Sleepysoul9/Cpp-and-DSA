#include<bits/stdc++.h>
using namespace std;

//is set but can store multiple entries of a single number(doesnt limit to uniqueness)

int main(){
    
    multiset<int>ms ;
    ms.insert(1);
    ms.emplace(3);
    ms.emplace(2);
    ms.emplace(2);
    ms.insert(4);
    ms.emplace(3);
    ms.insert(5);
    ms.emplace(3);
    ms.emplace(5);
    ms.emplace(2);
    ms.emplace(1);
    ms.emplace(6);
    ms.emplace(2);


    for(multiset<int>::iterator it=ms.begin() ;it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    int cnt = ms.count(1);
    cout<<"1's in multiset "<<cnt<<endl;

    ms.erase(1);            //erase all occurance of number at once

    ms.erase(ms.find(2));           //erase only first occurrance of number as find gives the iterator (position)

    for(multiset<int>::iterator it=ms.begin() ;it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    //earse multiple occurance of a number (not neccessarily all)
    auto it2 = ms.find(2);      //finds 1st occurrance of 2
    auto it3 = next(it2,2);     //finds next occurance of 2 jumped by 2 positions
    ms.erase(it2,it3);          //deletes all the 2 between [it2,it3)

    for(auto i : ms){
        cout<<i<< " ";
    }

    cout<<endl;


    return 0;
}