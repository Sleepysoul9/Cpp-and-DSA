#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(vector<int> &v, int *p, int *q){
    if(p>=q) return;
    swap(*p,*q);
    reverse_array(v,p+1,q-1);
}


int main(){
    vector<int> vect;
    int a,i , k;
    do{
        cout<<"do you wanna enter or not: ";
        cin>>k;
        if(k!=0){
            cout<<"enter a number : ";
            cin>>a;
            vect.emplace_back(a);
        }
    } while(k!=0);

    for(auto i :vect){
        cout<<i<<" ";
    }
    cout<<endl;

    if(vect.size()!=0){
    reverse_array(vect,&vect[0],&vect[vect.size()-1]);
    for(auto i :vect){
        cout<<i<<" ";
    }
    cout<<endl;
    }

    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(auto i :arr){
        cout<<i<<" ";
    }
    cout<<endl;

    


    return 0;
}