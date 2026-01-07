#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // Vector is a dynamic array that can grow and shrink in size.
    vector<int> v;          // Declaration of a vector of integers
    v.push_back(1);         // Adding an element to the end of the vector
    v.emplace_back(2);      // efficient way to add an element at the end
    for(int i =0 ; i<v.size(); i++){
        cout<<v[i]<<" ";    // Accessing elements using indexing
    }
    cout<<endl;

    v.emplace_back(3);
    v[1] = 4;              // Modifying the second element
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";     // Accessing elements using at() method
    }
    cout<<endl;

    cout<<"Front element: "<<v.front()<<endl; // Accessing the first element
    cout<<"Back element: "<<v.back()<<endl;   // Accessing the last element
    cout<<"Size of vector: "<<v.size()<<endl; // Getting the size of the vector
    cout<<"Capacity of vector: "<<v.capacity()<<endl; // Getting the capacity of the vector
    cout<<"Is vector empty? "<<(v.empty() ? "Yes" : "No")<<endl; // Checking if the vector is empty
    v.pop_back();          // Removing the last element
    cout<<"After pop_back: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";    // Displaying elements after pop_back
    }
    cout<<endl;

    vector<int> v2(3, 100); // Creating a vector of size 3, initialized with 100
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";    // Displaying elements of v2
    }
    cout<<endl;

    vector<int> v3(v2);     // Copying v2 into v3

    vector<pair<int, int>> vp; // Vector of pairs
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);
    for(int i=0; i<vp.size(); i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl; // Accessing elements of vector of pairs
    }

    cout<<endl;
    cout << "size of paired vector: " << vp.size() << endl;
    cout << "capacity of paired vector: " << vp.capacity() << endl;
    vp.emplace_back(5,6) ;
    cout << "After emplace_back(5,6): " << endl;
    for(int i=0; i<vp.size(); i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl; 
    }    
    cout << "capacity of paired vector: " << vp.capacity() << endl;

    
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);
    v.emplace_back(8);
    v.insert(v.begin() +1 ,{2,3}); // Inserting multiple elements at index 1

    cout<< "elements of vector using iterator:" << endl;
    vector<int>:: iterator i = v.begin();
    while(i < v.end())
    {
        cout << *i << " "; // Accessing the first element using iterator
        i++;
    }
    cout << endl;


    cout<<"different types of iterators:" << endl;
    //iterators are used to point to the memory addresses of STL containers

    vector<int>:: iterator it = v.begin();          //points to the first element memory address

    vector<int>:: iterator it2 = v.end();           //points to the next memory address of the last element

    vector<int>:: iterator it3 = v.end() - 1;       //points to the last element memory address

    vector<int>:: reverse_iterator it4 = v.rend();          //it first reverse the vector then points to the next memory address of reversed last element 

    vector<int>:: reverse_iterator it5 = v.rbegin();        ////it first reverse the vector then points to the next memory address of reversed first element
 

    cout<<"assessing elements using different iterators: \n\n"<<endl;

    cout<<"elements using iterator it to it2: ";
    for(it=v.begin(); it!=it2; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"elements using iterator it3 to it: ";
    for(it=it3; it>=v.begin(); it--){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"elements using reverse iterator it5 to it4: ";
    for(vector<int>:: reverse_iterator it=v.rbegin(); it!=it4; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"elements using reverse iterator it4 to it5: ";
    for(vector<int>:: reverse_iterator it=v.rend()-1; it>=v.rbegin(); it--){
        cout<<*it<<" ";
    }
    cout<<endl<<endl;

    cout<<"using auto iterator"<<endl;
    for(auto i = v.end()-1; i>=v.begin();i--){
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"for each loop"<<endl;
    for(auto i :v){
        cout << i << " ";
    }
    cout<<endl<<endl;

    cout<<"erasing elements from vector:"<<endl;
    v.erase(v.begin()+1); // Erasing the element at index 1

    v.erase(v.begin()+1, v.begin()+4); // Erasing elements [start , end)
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"inserting into vector"<<endl;
    vector<int> v5(3,100);      //{100,100,100}
    v5.insert(v5.begin(), 50);  //{50,100,100,100}  (loaction(needs an iterator) , value)
    v5.insert(v5.begin()+1,2,75); //{50,75,75,100,100,100}   (location(needa an iterator),count,value)
    v5.insert(v5.begin()+2,{55,60,70});
    v5.erase(v5.begin()+1);

    vector<int> copy{40,45};
    v5.insert(v5.begin(),copy.begin(),copy.end()); // inserting a vector into another vector
    
    for(auto i : v5){
        cout<<i<< " ";
    }
    cout<<v.size()<<endl;
    cout<<endl<<endl;

    vector<int> v6(3,10);
    vector<int> v7(3,20);

    cout<<"before swap v6: ";
    for(auto i : v6){
        cout<<i<<" ";
    }
    cout<<endl; 
    cout<<"before swap v7: ";
    for(auto i : v7){
        cout<<i<<" ";
    }
    cout<<endl;

    v6.swap(v7); //swapping contents of v6 and v7

    cout<< "after swapping , v6:";
    for(auto i :v6){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<< "after swapping , v7:";
    for(auto i :v7){
        cout<<i<<" ";
    }
    cout<<endl;


    v6.clear();  //clears the vector v6
    v7.clear();  //clears the vector v7
    cout<<"after clearing v6, size: "<<v6.size()<<endl;
    cout<<"after clearing v7, size: "<<v7.size()<<endl;

    return 0;
}