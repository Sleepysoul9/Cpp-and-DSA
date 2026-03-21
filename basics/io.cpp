#include<bits/stdc++.h>
using namespace std;

// we learn about cin.ignore() , getline(cin,s) , cin.get(); .
//we also learnt cin>>c , getline(cin,s) , cin.get(c) buffer styles and how to cope with them 

int main(){
    cout<<"hello"<<endl;          
    int n ;
    cout<<"enter n ";
    cin>>n;
    //  ">>" this operator after cin is programmed to take only one input at a time 
    // this function skips the leading whitespaces like " ", "\n" , "\t" , so even if the buffer is left from previous cin , it doesnt matter 

    cin.ignore(numeric_limits<streamsize>::max() ,'\n');
    //cin.ignore() function is used to remove the buffer "\n" that get added to input after we hit the new line or enter . for eg my cin take one input only for cin>>x but if i enter enter 5 and then hit enter to program to run the program would store "5\n" = "5" and "\n" for another input , this is bug . 
    
    cout<<"the value of n is : "<<n<<endl;

    string s;
    cout<<"enter the string : ";
    getline(cin,s);
    //getline is the clean function , it cleans the buffer "\n" after you hit the new line , so there is no need of cin.ignore()
    //there should be no newline buffer before getline function as it stops the point it see a newline "\n" . for eg if "5\n" buffer stays without getting cleaned , the string s will store nothing tehnically , it would get newline operator as input

    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<s<<endl;

    char c ;
    cout<<"enter char";
    cin.get(c);
    //it doesnt skips whitespaces just like cin>> , it takes space as input too . it behaves equally for buffer input , it takes newline as buffer , hence it is necessary to use cin.ignore() after this too
    //unlike cin , this function can take leading whitespaces as input, so the buffer needs to be cleared before taking new cin.get  
    
    cout<<"the c is  " <<c<<  ", this is our char ";

    return 0;
}