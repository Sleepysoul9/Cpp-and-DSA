#include<bits/stdc++.h>
using namespace std;

// arr[n] = {arr[0], arr[1], arr[2], ...., arr[n-1]}
// size of array = n
// indexing from 0 to n-1  

void array_initiallization_without_size() {
    // in this way we need not to specify size of array explicitly
    // we can initialize array without specifying size
    // compiler will automatically calculate size of array based on number of elements provided during initialization
    // but we need to provide all elements at the time of initialization

    // Initializing an array without specifying size
    int arr[] = {1, 2, 3, 4, 5};
    
    // Calculating the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Printing the elements of the array
    cout << "Array elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void array_initiallization_with_size() {
    // Initializing an array with specified size
    int arr[5] = {10, 20, 30, 40, 50};

    // Printing the elements of the array
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int brr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    // for 2d array while initializing we can skip size of first dimension , but its necessary to specify size of second dimension(row , column)
    // Printing the elements of the 2D array
    cout << "2D Array elements are: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }   
    array_initiallization_without_size();
    array_initiallization_with_size();

    return 0;
}