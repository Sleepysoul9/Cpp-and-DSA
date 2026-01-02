#include<bits/stdc++.h>
using namespace std;

void explain_pairs() {
    // a pair is a container that holds two values, which may be of different types.
    // It is defined in the <utility> header and is part of the C++ Standard Library
    pair<int , int> p = {1 , 2};     //intializing a pair of integers
    cout << "pair " << p.first << " " << p.second   << endl;                 
    cout<<"First element of pair p: " << p.first << endl;   //accessing first element
    cout<<"Second element of pair p: " << p.second << endl; //accessing second element

    pair<string , int> student = {"Kushagra" , 20}; //pair of string and integer
    cout<<"Student Name: " << student.first << ", Age: " << student.second << endl;

}

void nested_pairs() {
    cout << "nested pairs: " << endl;
    pair<int , pair<int , int >> p = {1 , {2,3}} ;
    cout << p.first << " " << p.second.second << " " << p.second.first << endl; 
}

void pair_arrays_with_initiallization(){
    cout<<"array of pairs with initiallization: "<<endl;
    pair<int , int> arr[] = { {1,2}, {3,4} , {5,6}};
    for(int i=0 ; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

void pair_arrays_without_initiallization(){
    cout<<"array of pairs without initiallization: "<<endl;
    pair<int,int> arr[3];
    for(int i =0 ; i<3 ; i++){
        cout << "Enter pair " << i+1 << " : ";
        int a , b;
        cin >> a >> b;
        arr[i] = make_pair(a,b);        //make_pair function
    }
    for (int i=0 ; i <3 ; i++){
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

void pair_arrays_without_initiallization_woFunc(){
    cout<<"array of pairs without initiallization: "<<endl;
    pair<int,int> arr[3];
    for(int i =0 ; i<3 ; i++){
        cout << "Enter pair " << i+1 << " : ";
        cin >> arr[i].first >> arr[i].second ; //directly accessing members
    }
    for (int i=0 ; i <3 ; i++){
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}



int main() {
    explain_pairs();
    nested_pairs();
    pair_arrays_with_initiallization();
    pair_arrays_without_initiallization();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    pair_arrays_without_initiallization_woFunc();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}