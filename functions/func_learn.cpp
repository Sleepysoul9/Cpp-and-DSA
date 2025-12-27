#include<bits/stdc++.h>
using namespace std;

// function are of four types
// 1. void function without parameters
        //these functions dont return any value and dont take any parameters
// 2. return type function without parameters
        //these functions return a value but dont take any parameters
// 3. void function with parameters
        //these functions dont return any value but take parameters
// 4. return type function with parameters
//         //these functions return a value and take parameters



// void function with parameters
void printname(string name){
    cout << "hello " << name << endl;
}

//void function without parameters
void hello(){
    cout<<"hello world"<<endl;
}

//return type function without parameters
int gender(){
    bool gen ;
    cout << "enter gender (1 for male, 0 for female) ";
    cin >> gen;
    return gen;
}

//return type function with parameters
int addnum(int a , int b) {
    return a + b;
}


int main() {
    string name ;
    int n , a , b ;
    cout << "enter name " ;
    cin >> name ;
    cout << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "enter 2 numbers " ;
    cin >> a >> b ;
    cout<< endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "1. void function with parameters (hello name)" << endl;
    cout << "2. void function without parameters (hello world)" << endl;
    cout << "3. return type function without parameters (gender)" << endl;
    cout << "4. return type function with parameters (addnum)" << endl;
    cout << "choose any one function (1-4)"<< endl;
    cin >> n ;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (n) {
        case 1 : 
            printname(name);
            break;
        case 2 : 
            hello();
            break;
        case 3 :
            gender() ? cout << "gender is male" << endl : cout << "gender is female" << endl;
            break;
        case 4 :
            cout << "sum is " << addnum(a,b) << endl;
            break;
    }

    return 0;
}