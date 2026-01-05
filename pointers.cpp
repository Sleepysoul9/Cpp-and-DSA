#include<bits/stdc++.h>
using namespace std;

void pointerexplanation(){
    // Pointer is a variable that stores the memory address of another variable.
    int a = 36 ;
    cout << &a << endl ;
    //&a gives the address of variable a and it never changes throughout the    program execution

    //pointer variable are used to store the address of other variables
    int *p = &a ;
    cout << p << endl ;
    cout<< *p << endl ; //dereferencing the pointer to get the value at that address
    cout << *(&a) << endl ; //dereferencing the address of a to get the value of a
    cout << &p << endl;
    cout << sizeof(p) << endl;

    float b = 45.67 ;
    float *q = &b ;
    cout << q << endl ;
    cout << *q << endl ;
    cout << sizeof(q) << endl;
}

void pointer_of_pointer(){
    int a = 36 ;
    int *p = &a ;

    int**r = &p ;        //pointer of pointer(stores memory address of pointer p)
    cout << r << endl ;
    cout << *r << endl ;
    cout << p << endl ;
    cout << **r << endl ;
}

void null_ptr(){
    int*p = NULL ;          //null pointer(holds no address as of now)
    cout << p << endl ;
    // cout << *p << endl ;   //error : segmentation fault

}

void dangling_ptr(){
    int *p ;                 //dangling pointer (pointer that is not initialized)
    cout << p << endl ;
    // cout << *p << endl ;   //error : segmentation fault
}

void FunctionUsingPointer(int *p){
    *p += 10 ;
}

void functionReference(int &x){
    x += 5 ;
}   

int* function_returning_pointer(int *p){
    *p += 20 ;
    *(++p) = 30 ;
    
    return p ;
}

int main(){
    pointerexplanation();
    pointer_of_pointer();
    null_ptr();
    dangling_ptr();
    int a = 45 ;
    int *p = &a ;
    cout << "before function call a = " << a << endl ;
    FunctionUsingPointer(p);
    cout << "after function call a = " << a << endl ;

    int b = 100 ;
    functionReference(b);
    cout << "after function call b = " << b << endl ;
    FunctionUsingPointer(&b);
    cout << "after second function call b = " << b << endl ;

    int *c = function_returning_pointer(&b);
    cout << "after function call b = " << b << endl ;
    cout << "returned value c = " << *c << endl ;


    return 0;
}
