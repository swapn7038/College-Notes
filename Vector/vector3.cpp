// Cpp vector program to take input using for loop 

#include<iostream>
#include<vector> 
using namespace std; 

int main() {
    vector<int> arr;
    
    for(int i = 0; i < 5; i++){
        int element; 
        cin >> element; 
        arr.push_back(element);
    }
    
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    
    cout << endl ;
    
    return 0;
}