#include<bits/stdc++.h>
using namespace std;

int dosomething(int num) {
   
    // this will not change the value of num in main as we are passing by value. 
    //here the stack will create a copy of num and any changes made to num here will not reflect in main function.
    //the original num is used in main fuction
    //the copy of num created here is local to this function only.
    //the copy of num will be destroyed once this function ends.
    //this is called pass by value
    
    cout << num << endl;
    num = num + 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    return num;
}


int domore(int &num) {
    
    // this will change the value of num in main as we are passing by reference. 
    //here the stack will not create a copy of num and any changes made to num here will reflect in main function.
    //the original num is used in main fuction
    //there is no copy of num created here.
    //this is called pass by reference
    
    cout << num << endl;
    num = num + 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    return num;
}


void array_trial(int arr[]){
    
    // array is always passed by reference in c++, so we dont need to use "&" to pass by reference

    for(int i = 0 ; i < 5 ; i++){
        arr[i] = arr[i] + 10;
    }
    cout << "inside function array[0] is "<< arr[0]<< endl ;
}

int main(){
    int num = 19;
    dosomething(num);
    cout << num << endl;
    domore(num);
    cout << num << endl;

    int arr[5] = {1,2,3,4,5};
    cout << "before function array[0] is "<< arr[0]<< endl;
    array_trial(arr);
    cout << "after function array[0] is "<< arr[0]<< endl;

    return 0;
}