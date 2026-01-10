#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    //we assume that initially p1 is placed before p2 like p1,p2
    
    if(p1.second<p2.second) return true;        //in this condition ,it satisfies our sorting order so p1,p2 remain as it is
    if(p1.second > p2.second) return false;     //in this condition , pairs dont satisfies our sorting conditions we return false and the sort function will swap them
    
    if(p1.first>p2.first) return true;          // in this condition the second are equal so firsts satisfies our sorting condition so we return true
    if(p1.first<p2.first) return false;         //in this condition the seconds are equal so first are checked and they didnt satisfies our condition so we return false and sort function swaps them 

    return false;
}

int main(){
    int arr[]={1,3,2,4,2,1,6,27,83,4,7,9};

    sort(arr,arr+13);       //it sorts from starting to end [start,end)
    for(int in=0; in<12;in++){
        cout<<arr[in]<<" ";
    }
    cout<<endl;

    vector<int> v= {1,2,3,24,2,452,3,41,4,5,63};
    sort(v.begin(),v.begin()+5);
    sort(v.begin()+5,v.end());
    sort(v.begin(),v.end(),greater<int>());              //reverse sort 
    
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    pair<int,int> p[] = {{1,2},{2,1},{4,2},{3,1},{5,3}};

    //now we want to sort this array of pairs in our fashion
    //sorting would be on basis of second , and if 2 seconds are same arrange in comparision of first in which decreasing order should be followed

    //syntax to do that :  sort(start,end,comp)

    //comp is your own comparator (boolean function)

    sort(p,p+5,comp);
    for(int i = 0;i<5;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    cout<<endl;

    int num = 7;
    int cnt = __builtin_popcount(num);          //number of set digits(1's)in binary of a given number
    cout<<"popcount of "<<num<<"is: "<<cnt<<endl;

    long long nam = 123456789122345;
    cnt = __builtin_popcount(nam);
    cout<<"popcount of long num"<<nam<<" is: "<<cnt<<endl;

    //next permutation function gives dictionary wise next permutation
     
    string s="123";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int brr[] = {1,23,2,4,34,2,5,4245,2};
    auto it = max_element(begin(brr),end(brr));     //returns max element in array or vector
    auto bt = min_element(begin(brr),end(brr));     //return minimum element in array or vector

    cout<<*it<<endl;
    cout<<*bt<<endl;
    

    return 0;
}